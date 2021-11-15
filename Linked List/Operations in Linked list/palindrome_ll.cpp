#include<iostream>
#include<stack>
using namespace std;
struct node{
  int data;
  node* next=NULL;
  node(int d){
    data=d;
    next=NULL;
  }
};
bool palindrome_check_stack(node *head){
  stack<char> s;
  for( node* current=head;current!=NULL;current=current->next){
    s.push(current->data);
  }
  for(node* current=head;current!=NULL;current=current->next){
    if(s.top()!=current->data) return false;
    s.pop();
  }
  return true;

}
bool palindrome_check(node *head){
  node* slow=head, *fast=head;
  while(fast!=NULL && fast->next!=NULL){
    slow=slow->next;
    fast=fast->next->next;
  }
  node* rev=reverselist(slow->next);
  node* current=head;
  while(rev!=NULL){
    if(rev->data!=current->data) return false;
    rev=rev->next;
    current=current->next;
  }
  return true;
}
int main(){
  node *head=new node('r');
	head->next=new node('a');
	head->next->next=new node('d');
	head->next->next->next=new node('a');
	head->next->next->next->next=new node('r');
	if(palindrome_check(head))
	    cout<<"Yes";
	else
	    cout<<"No";
	return 0;
}