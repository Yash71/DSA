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
class LinkedList{
  node* head,*tail;
  public:
  LinkedList(){
    head=NULL;
    tail=NULL;
  }
  void insertion_at_end(int data){
    node* newnode=new node(data);
    if(head==NULL){
      head=newnode;
    }
    else{
      node* current=head;
      while(current->next!=NULL){
        current=current->next;
      }
      current->next=newnode;
    }
  }
  void print(){
    node* current=head;
    while(current!=NULL){
      cout<<current->data<<" -> ";
      current=current->next;
    }
    cout<<"NULL"<<"\n";

  }
  node* midpoint_ll(){
    node* slow=head, *fast=head; //for odd number of item sin the list
    // node* slow=head, *fast=head->next; //for even number of items in the list
    while(fast!=NULL && fast->next!=NULL){
      slow=slow->next;
      fast=fast->next->next;
    }
    return slow;
  }
  
};

int main(){
  LinkedList ll=LinkedList();
  ll.insertion_at_end(10);
  ll.insertion_at_end(20);
  ll.insertion_at_end(30);
  ll.insertion_at_end(40);
  ll.insertion_at_end(50);

  ll.print();
  node* mid=ll.midpoint_ll();
  cout<<"Midpoint: "<<mid->data<<"\n";

}