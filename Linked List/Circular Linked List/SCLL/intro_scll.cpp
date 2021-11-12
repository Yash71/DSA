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
void print(){

}
int main(){
  node* head=new node(10);
  head->next=new node(20);
  head->next->next=new node(30);
  head->next->next->next=head;
  return 0;
}