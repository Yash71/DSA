// Inserting after a particular(kth) position in a linked list
#include<iostream>
using namespace std;
class LinkedList{
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
  LinkedList(){
    head=NULL;
    tail=NULL;
  }
  void insertion_list(int data){
    node* newnode=new node(data);
    if(head==NULL){
      head=newnode;
      tail=head;
    }
    else{
      tail->next=newnode;
      tail=tail->next;
    }
  }
  bool empty_list(){
    return head==NULL;
  }
  void insertion_k_list(int k, int data){
    if(k<0){
      cout<<"Invalid position"<<"\n";
      return;
    }
    if(empty_list()){ //empty list
      cout<<"List is empty"<<"\n";
      return;
    }
    node* newnode=new node(data);
    if(k==0){ //insertion at head
      newnode->next=head;
      head=newnode;
      return;
    }
    else{
      node* current=head;
      while(current!=NULL && --k){
        current=current->next;
      }
      if(k==0){
        newnode->next=current->next;
        current->next=newnode;
      }
      else{
        cout<<"Position exceeds the size of linked list"<<"\n";
      }
    }
  }
  void print_list(){
    if(head==NULL){
      cout<<"List is empty"<<"\n";
      return;
    }
    node* current=head;
    while(current!=NULL){
      cout<<current->data<<"->";
      current=current->next;
    }
    cout<<"NULL"<<"\n";
  }
};
int main(){
  LinkedList ll=LinkedList();
  ll.insertion_list(10);
  ll.insertion_list(20);
  ll.insertion_list(30);
  ll.insertion_list(40);
  ll.print_list();

  ll.insertion_k_list(0,100); //insertion at head
  ll.print_list();

  ll.insertion_k_list(-1,2); // invalid insertion
  ll.print_list();

  ll.insertion_k_list(2,200); //insertion after kth position
  ll.print_list();

  ll.insertion_k_list(6,300); //insertion at tail
  ll.print_list();
  return 0;
}