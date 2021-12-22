//Insertion at the end in a linked list

#include<bits/stdc++.h>
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
  node *head,*tail;
  public:
  LinkedList(){
    head=NULL;
    tail=NULL;
  }
  //insertion at the end of the linked list
  // void insertion_at_end(int data){
  //   node* newnode=new node(data); //creating a new node
  //   if(head==NULL){ //if we are already at the last element or the list is empty
  //     head=newnode;
  //   }
  //   else{
  //     node* current=head;
  //     while(current->next!=NULL){ //since the current next pointer is not pointing to NULL, we continue moving forward
  //       current=current->next; //updating the current position
  //     }
  //     current->next=newnode; //once we reach the end, we insert the element at the new current position
  //   }
  // } //O(n) time
  
  //the following code inserts a new node at the end of the linked list in O(1) time
  void insertion_at_last(int data){
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
  // printing the linked list
  void list_print(){
    if(head==NULL){
      cout<<"list is empty";
      return;
    }
    else{
      node *current=head;
      while(current!=NULL){
        cout<<current->data<<"->";
        current=current->next;
      }
      cout<<"NULL"<<"\n";
    }
  }
};
int main(){
  LinkedList ll= LinkedList();
  ll.insertion_at_last(10);
  ll.insertion_at_last(20);
  ll.insertion_at_last(50);
  ll.list_print();
  
  return 0;
  

} 
