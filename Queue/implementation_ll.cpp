#include<iostream>
using namespace std; 
class Queue{
  struct node{
    int data;
    node* next;
    node(int d){
      data=d;
      next=NULL;
    }
  };
  node* head,*tail;
  public:
  Queue(){
    head=NULL;
    tail=NULL;
  }
  void enqueue(int data){
    node* newnode=new node(data);
    if(head==NULL){
      head=newnode;
      tail=head;
      return;
    }
    tail->next=newnode;
    tail=newnode;
  }
  void dequeue(){
    if(head==NULL){
      cout<<"queue underflow"<<"\n";
      return;
    }
    node* current=head;
    head=head->next;
    delete(current);
  }
  void print(){
    node* current=head;
    while(current!=NULL){
      cout<<current->data<<" ";
      current=current->next;
    }
    cout<<"\n";
  }
};
int main(){
  Queue llq=Queue();
  llq.enqueue(10);
  llq.enqueue(20);
  llq.enqueue(30);
  llq.enqueue(40);
  llq.enqueue(50);
  llq.enqueue(60);
  llq.print();
  return 0;
}