// delete duplicate nodes from an unsorted linked list
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
  void print(){
    node* current=head;
    while(current!=NULL){
      cout<<current->data<<" -> ";
      current=current->next;
    }
    cout<<"NULL"<<"\n";
  }
  void del_dup(){
    node* current=head, *Next=head;
    while(current!=NULL){
      while(Next->next!=NULL){
        if(current->data==Next->data){
          node* temp=Next->next;
          Next->next=Next->next->next;
          delete(temp);
        }
        else Next=Next->next;
      }
      current=current->next;
    }
  }
};
int main(){
  LinkedList ll=LinkedList();
  ll.insertion_at_end(10);
  ll.insertion_at_end(20);
  ll.insertion_at_end(90);
  ll.insertion_at_end(20);
  ll.insertion_at_end(30);
  ll.insertion_at_end(20);
  ll.insertion_at_end(90);
  ll.insertion_at_end(30);
  cout<<"With Duplicates"<<"\n";
  ll.print();
  cout<<"Without Duplicates"<<"\n";
  ll.del_dup();
  ll.print();
}