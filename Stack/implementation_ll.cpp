// implementation of stack using linked list
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
struct stack{
  node* head;
  int size;
  stack(){
    head=NULL;
    size=0;
  }
  void push(int data){
    node* newnode=new node(data);
    newnode->next=head;
    newnode=head;
    size++;
  }
  int pop(){
    if(head==NULL) return NULL;
    int node_data=head->data;
    node* temp=head;
    head=head->next;
    delete(temp);
    size--;
    return node_data;
  }
  int size_stk() {return size;}
  bool isempty(){return (head==NULL);}
  int peek(){
    if(head==NULL) return -1;
    return head->data;
  }
};
int main(){
  stack s;
  s.push(5);
  s.push(10);
  s.push(20);
  cout<<s.pop()<<endl;
  cout<<s.size_stk()<<endl;
  cout<<s.peek()<<endl;
  cout<<s.isempty()<<endl;
  return 0;
}