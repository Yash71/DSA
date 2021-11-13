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
//implementation 1
void print(node* head){
  if(head==NULL) cout<<"NULL"; return;
  cout<<head->data<<" ";
  for(node* current=head->next;current!=head;current=current->next){
    cout<<current->data;
  }
}
//implementation 2
void print_2(node* head){
  if(head==NULL) cout<<"NULL"; return;
  node* current=head;
  do{
    cout<<current->data<<" ";
    current=current->next;
  }while(current!=head);
}

int main(){
  node* head=new node(10);
  head->next=new node(20);
  head->next->next=new node(30);
  head->next->next->next=head;
  print(head);
  return 0;
}