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
//approach 1: O(n)
node* insertion_beg(node* head, int x){
  node* newnode=new node(x);
  if(head==NULL){
    newnode->next=newnode;
  }
  else{
    node* current=head;
    while(current->next!=head){
      current=current->next;
    }
    current->next=newnode;
    newnode->next=head;
  }
  return newnode;
}
//approach 2: O(1)
node* insertion_begin(node* head, int x){
  node* newnode=new node(x);
  if(head==NULL){
    newnode->next=newnode;
    return newnode;
  }
  else{
    newnode->next=head->next;
    head->next=newnode;
    int swapper;
    swapper=newnode->data;
    newnode->data=head->data;
    head->data=swapper;
    return head;
  }
}
void print(node* head){
  if(head==NULL)return;
cout<<head->data<<" ";
  for(node* current=head->next;current!=head;current=current->next){
    cout<<current->data;
  }
}

int main(){
  node* head=new node(10);
  head->next=new node(20);
  head->next->next=new node(30);
  head->next->next->next=head;
  head=insertion_beg(head,9);
  // head=insertion_begin(head, 8);
  print(head);
  return 0;
}