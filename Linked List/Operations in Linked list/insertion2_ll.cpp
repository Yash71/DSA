//insertion at the beginning of a linked list

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
  void insertion_at_begin(int data){
    node* newnode= new node(data);
    if(head==NULL){
      head=newnode;
      tail=newnode;
    }
    else{
      newnode->next=head; //creating the new head 
      head=newnode; //assigning the value of newnode to head
    }     
  }
  void print_list(){
    if(head==NULL){
      cout<<"List is empty"<<"\n";
      return;
    }
    else{
      node* current=head;
      while(current!=NULL){
        cout<<current->data<<"->";
        current=current->next;
      }
      cout<<"NULL"<<"\n";
    }
  }

};
int main(){
  LinkedList ll=LinkedList();
  ll.insertion_at_begin(10);
  ll.insertion_at_begin(20);
  ll.insertion_at_begin(30);
  ll.print_list();
} 
