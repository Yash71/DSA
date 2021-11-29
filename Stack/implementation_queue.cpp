// Implement 1 stack using 2 queues
#include<iostream>
#include<queue>
using namespace std;
class stack{
  queue<int>*q1, *q2, *qtemp;
  public:
  stack(){
    q1=new queue<int>;
    q2=new queue<int>;
    qtemp=NULL;
  }
  void push(int data){
    q2->push(data);
    while(!q1->empty()){ //pushing elements of q1 to q2
      q2->push(q1->front());
      q1->pop();
    }
    qtemp=q1;
    q1=q2; //swapping pointers
    q2=qtemp;
  }
  void pop(){
    if(empty())
     cout<<"Stack underflow"<<"\n";
    else 
      q1->pop();
  
  }
  int top(){
    if(empty()){
      cout<<"Stack Underflow"<<"\n";
      return -1;
    }
    else return q1->front();
  }
  int size(){
    return q1->size()+q2->size();
  }
  bool empty(){
    return q1->empty() && q2->empty();
  }
};
int main(){
  stack s=stack();
  s.push(10);
  s.push(20);
  s.push(30);
  cout<<s.top()<<"\n";
  s.pop();
  cout<<s.top()<<"\n";
  s.pop();
  cout<<s.top()<<"\n";
  s.pop();
  cout<<s.top()<<"\n";
  s.pop();
  return 0;
}