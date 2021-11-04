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
  //deleting the node in a linked list
  void deletion_list(int target_data){
    node* current=head;
    if(head==NULL){
      cout<<"List is empty"<<"\n";
      return;
    }
    else if(head->data==target_data){
      head=head->next; 
      free(current);
    }
    else{
      while(current->next!=NULL && current->next->data!=target_data){
        current=current->next;
      }
      if(current->next==NULL){
        cout<<"Data doesn't exists"<<"\n";
        return;
      }
      else{
        node* target_node=current->next;
        current->next=current->next->next;
        free(target_node);
      }
    }
  }
  void print_list(){
    if(head==NULL){
      cout<<"the list is empty"<<"\n";
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
  ll.insertion_list(40);
  ll.insertion_list(50);
  ll.print_list();
  ll.deletion_list(50); //deleting tail
  ll.print_list();

  ll.deletion_list(20); //deleting intermediate node
  ll.print_list();

  ll.deletion_list(10); //deleting head
  ll.print_list();
  

}