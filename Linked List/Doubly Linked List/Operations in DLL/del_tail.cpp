#include<iostream>
using namespace std;
struct node{
  int data;
  node* next;
  node* previous;
  node(int d){
    data=d;
    next=NULL;
    previous=NULL;
  }
};
node* del_tail(node* head){
  if(head==NULL) return NULL;
  if(head->next==NULL){
    delete head;
    return NULL;
  }
  
  node* current=head;
  while(current->next!=NULL){
  current=current->next;
}
  current->previous->next=NULL;
  delete current;
  return head;
}
void print(node* head){
  node* current=head;
  while(current!=NULL){
    cout<<current->data<<" ";
    current=current->next;
  }
  cout<<"NULL"<<"\n";
}
int main(){
  node* head=new node(10);
  node* node1=new node(20);
  node* node2=new node(30);
  // node* node3=new node(40);
  node1->previous=head;
  head->next=node1;
  node1->next=node2;
  node2->previous=node1;
  head=del_tail(head);
  print(head);
  return 0;
}