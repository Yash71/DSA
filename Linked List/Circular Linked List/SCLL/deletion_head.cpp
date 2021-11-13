#include<iostream>
using namespace std;
struct node{
  int data;
  node* next;
  node(int d){
    data=d;
    next=NULL;
  }
};
void print(node* head){
  if(head==NULL)return;
  cout<<head->data<<" ";
  for(node* current=head->next;current!=head;current=current->next){
    cout<<current->data<<" ";
  }
}
// Approach 1: O(n)
node* deletion_head(node* head){
  if(head==NULL)return NULL;
  if(head->next==head){
    delete head;
    return NULL;
  }
  node* current=head;
  while(current->next!=head){
    current=current->next;
  }
  current->next=head->next;
  delete head;
  return current->next;  
}
// Approach 2: O(1)
node* del_head(node* head){
  if(head==NULL) return NULL;
  if(head->next==head){
    delete head;
    return NULL;
  }
  head->data=head->next->data;
  node* temp=head->next;
  head->next=head->next->next;
  delete temp;
  return head;
}
int main(){
  node* head=new node(10);
  head->next=new node(20);
  head->next->next=new node(30);
  head->next->next->next=head;
  head=deletion_head(head);
  head=del_head(head);
  print(head);
  return 0;
}