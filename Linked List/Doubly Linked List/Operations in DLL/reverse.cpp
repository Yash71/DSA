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
void print(node* head){
  node* current=head;
  while(current!=NULL){
    cout<<current->data<<" ";
    current=current->next;
  }
  cout<<"NULL"<<"\n";  
}
node* reverse(node* head){
  if(head==NULL || head->next==NULL) return head;
  node* temp=NULL;
  node* current=head;
  while(current!=NULL){
    temp=current->next;
    current->next=current->previous;
    current->previous=temp;
    
    current=current->previous; //since we swapped the next and previous pointers
  }
  return temp->previous;
}
int main(){
  node* head=new node(10);
  node* node1=new node(20);
  node* node2=new node(30);
  head->next=node1;
  node1->previous=head;
  node2->previous=node1;
  node* rev=reverse(head);
  print(rev);
}