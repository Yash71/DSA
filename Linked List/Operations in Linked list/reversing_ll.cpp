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
  node* head, *tail;
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
  void print_list(){
    node* current=head;
    while(current!=NULL){
      cout<<current->data<<" -> ";
      current=current->next;
    }
    cout<<"NULL"<<"\n";
  } 
  void reverse_ll_itterative(){
    node* previous=NULL;
    node* current=head;
    node* next=NULL;
    while(current!=NULL){
      next=current->next;
      current->next=previous;
      previous=current;
      current=next;
    }
    head=previous;
  }
  node* reverse_ll_recursiveUtil(node* previous, node* current){
    if(current!=NULL){
      node* head=reverse_ll_recursiveUtil(current, current->next);
      current->next=previous;
      return head;
    }
    else{
      return previous;
    }
  }
  void reverseRecursive(){
    head=reverse_ll_recursiveUtil(NULL,head);
  }
};
int main(){
  LinkedList ll=LinkedList();
  ll.insertion_at_end(10);
  ll.insertion_at_end(20);
  ll.insertion_at_end(30);
  ll.insertion_at_end(40);
  ll.insertion_at_end(50);
  ll.print_list();
  // cout<<"Reverse Linked List itteratively is: "<<"\n";  
  // ll.reverse_ll_itterative();
  // ll.print_list();
  cout<<"Reverse Linked List recursively is: "<<"\n";
  ll.reverseRecursive();
  ll.print_list();

  return 0;


}