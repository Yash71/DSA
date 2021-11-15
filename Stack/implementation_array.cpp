#include<iostream>
using namespace std;
struct stack{
  int* arr;
  int capacity;
  int top;
  stack(int c){
    capacity=c;
    arr=new int[c];
    top=-1;
  }
void push(int data){
  top++;
  arr[top]=data;
}
int pop(){
  int res=arr[top];
  top--;
  return res;
}
int peek(){
  return arr[top];
}
int size(){
  return (top+1);
}
bool isempty(){
  return (top==-1);
}
};
int main(){
  stack s(5);
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);
  s.push(60);
  cout<<s.pop()<<"\n";
  cout<<s.peek()<<"\n";
  cout<<s.size()<<"\n";
  cout<<s.isempty()<<"\n";
  return 0;
}