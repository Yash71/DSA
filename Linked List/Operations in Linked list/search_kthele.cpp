//search the kth element from the last of the linked list
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
  void print_ll(){
    node* current=head;
    while(current!=NULL){
      cout<<current->data<<" -> ";
      current=current->next;
    }
    cout<<"NULL"<<"\n";

  }
    node* find_kthele_fromend(int k){
      node* slow=head;
      node* fast=head;
      while(fast!=NULL && /*--k*/ k--){
        fast=fast->next;
      }
      if(fast!=NULL){
        // fast=fast->next;
        while(fast!=NULL){
          slow=slow->next;
          fast=fast->next;
        }
        return slow;
      }
      else{
        cout<<"kth position doesn't exist"<<"\n";
        return NULL;
      }
    }
    
};
int main(){
  LinkedList ll=LinkedList();
  ll.insertion_at_end(10);
  ll.insertion_at_end(20);
  ll.insertion_at_end(30);
  ll.insertion_at_end(40);
  ll.insertion_at_end(50);
  ll.print_ll();

  node* kth=ll.find_kthele_fromend(3);
  cout<<kth->data<<"\n";
  return 0;
}