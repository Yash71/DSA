//Introduction to structures
#include<bits/stdc++.h>
using namespace std;

struct node{
  int data;
  node *next;
  
  node(int d=0){ //constuctor
    data=d;
    next=NULL;
  }
};
int main(){
  // various methods of assignment

  //method 1
  node h=node(10);
  cout<<h.data<<"\n";

  //method 2
  node *x=new node(20); 
  cout<<x->data<<" or "<<(*x).data<<"\n"; //when we access the objet values using pointers, we use -> operator

  //method 3
  node y={30};
  cout<<y.data<<"\n";

  //method 4
  node z(10);
  cout<<z.data<<"\n";

  //method 5 (Dynamic Allocation using malloc function)
  node *b=(node *)malloc(sizeof(struct node));
  cout<<b->data<<"\n";

  return 0;
}