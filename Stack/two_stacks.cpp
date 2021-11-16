#include<iostream>
using namespace std;
struct twostack{
  int *arr, cap, top1,top2;
  twostack(int data){
    arr=new int[data];
    top1=-1;
    top2=cap;
    cap=0;
  }
  void push1(int data){
    if(top1<top2-1){
      top1++;
      arr[top1]=data;
    }
  }
  void push2(int data){
    if(top1<top2-1){
      top2--;
      arr[top2]=data;
    }
  }
  int pop1(){
    if(top1>0){
       int data=arr[top1];
       top1--;
       return data;
    }
    else exit(0);
  }
  int pop2(){
    if(top2<cap){
      int data=arr[top2];
      top2++;
      return data;
    }
    else exit(0);
  }
};
int main() 
{ 
  twostack ts(5); 
  ts.push1(5); 
  ts.push2(10); 
  ts.push2(15); 
  ts.push1(11); 
  ts.push2(7); 
  cout << "Popped element from stack1 is "<<ts.pop1(); 
  ts.push2(40); 
  cout << "\nPopped element from stack2 is "<< ts.pop2(); 
  return 0; 
}