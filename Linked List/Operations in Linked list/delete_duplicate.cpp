// removing duplicates from a sorted linked list
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
  node* head;
  public:
  LinkedList(){
    head=NULL;
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
  void del_dup(){
    node* current=head;
    while(current->next!=NULL && current!=NULL){
      if(current->data==current->next->data){
        node* temp=current->next;
        current->next=current->next->next;
        delete(temp);
      }
      else current=current->next;
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
};
int main(){
  node* head=NULL;
  LinkedList ll=LinkedList();
  ll.insertion_at_end(10);
  ll.insertion_at_end(20);
  ll.insertion_at_end(30);
  ll.insertion_at_end(40);
  ll.insertion_at_end(50);
  ll.insertion_at_end(60);
  ll.insertion_at_end(60);
  ll.insertion_at_end(60);
  cout<<"With duplicates"<<"\n";
  ll.print();
  cout<<"Without duplicates"<<"\n";
  ll.del_dup();
  ll.print();
}