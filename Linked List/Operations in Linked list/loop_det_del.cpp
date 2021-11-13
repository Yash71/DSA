// loop detection and deletion in singly linked list
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
void loop_detection_deletion(node *head){
  node* slow=head, *fast=head;
  while(fast!=NULL && fast->next!=NULL){
    slow=slow->next;
    fast=fast->next->next;
    if(slow==fast) break;
  }
    if(slow!=fast) return;
    slow=head;
    while(slow->next!=fast->next){
      slow=slow->next;
      fast=fast->next;
    }
    fast->next=NULL;
}
void print(node* head){
  if(head==NULL)return;
  node* current=head;
  while(current!=NULL){
    cout<<current->data<<" ";
    current=current->next;
  }
}
int main(){
node *head=new node(15);
	head->next=new node(10);
	head->next->next=new node(12);
	head->next->next->next=new node(20);
	head->next->next->next->next=head->next;
  loop_detection_deletion(head);
  print(head);
}