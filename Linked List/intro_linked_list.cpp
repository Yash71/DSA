#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  node *next;

  node(int d=0){
    data=d;
    next=NULL;
  }
};
int main(){
  //creating a linked list
  node *head=new node(10);
  head->next=new node(20);
  head->next->next=new node(50);

  //printing the linked list
  while(head!=NULL){
    cout<<head->data<<" ";
    head=head->next;
  }
}