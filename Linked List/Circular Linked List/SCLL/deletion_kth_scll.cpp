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
node* deletion_kth(node* head, int k){
  if(head==NULL)return NULL;
  if(k==1 && head!=NULL){
    node* temp=head->next;
    head->next=head->next->next;
    delete temp;
    return head;
  }
  node* current=head;
  for(int i=0;i<k-2;i++){
    current=current->next;
  }
  node* temp=current->next;
  current->next=current->next->next;
  delete temp;
  return head;
}
int main(){
  node* head=new node(10);
  head->next=new node(20);
  head->next->next=new node(30);
  head->next->next->next=head;
  head=deletion_kth(head, 2);
  print(head);

  return 0;
}