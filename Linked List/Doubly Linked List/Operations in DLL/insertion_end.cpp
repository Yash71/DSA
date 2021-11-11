// insertion at the end of the doubly linked list
#include<iostream>
using namespace std;
  struct node{
    int data;
    node* next;
    node* previous;
    node(int d){
      data=d;
      next=NULL;
      previous=NULL;
    }
  };
node* insertion_end(node* head, int data){
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
        newnode->previous=current;
        // newnode->next=NULL;
        return head;
    }
}

void print(node* head){
  node* current=head;
  while(current!=NULL){
    cout<<current->data<<" ";
    current=current->next;
  }
  cout<<"NULL"<<"\n";  
}
int main(){
  node *head=new node(10);
	node *temp1=new node(20);
	node *temp2=new node(30);
	head->next=temp1;
	temp1->previous=head;
	temp1->next=temp2;
	temp2->previous=temp1;
  head=insertion_end(head,5);
  print(head);
  return 0;
}