// seggregate even odd nodes in linked list
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
  node* current=head;
  while(current!=NULL){
    cout<<current->data<<" ";
    current=current->next;
  }
  cout<<"NULL"<<"\n";
}
node* seggregate(node* head){
  node* e_beg=NULL, *o_beg=NULL, *e_end=NULL, *o_end=NULL;
  node* current=head;
  while(current!=NULL){
    if(current->data % 2 == 0){
      if(e_beg==NULL){
        e_beg=current;
        e_end=e_beg;
      }
      else{
        e_end->next=current;
        e_end=e_end->next;
      }
    }
    else{
      if(o_beg==NULL){
        o_beg=current;
        o_end=o_beg;
      }
      else{
        o_end->next=current;
        o_end=o_end->next;
      }
    }
    current=current->next;
  }
  if(o_beg==NULL || e_beg==NULL) return head;
  e_end->next=o_beg;
  o_end->next=NULL;
  return e_beg;
}
int main(){
  node *head=new node(17);
	head->next=new node(15);
	head->next->next=new node(8);
	head->next->next->next=new node(12);
	head->next->next->next->next=new node(10);
	head->next->next->next->next->next=new node(5);
	head->next->next->next->next->next->next=new node(4);
  print(head);
  head=seggregate(head);
  print(head);
  return 0;
}