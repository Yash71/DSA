// getmin function in O(1) space complexity
//assuming that all the elements are positive
//For handling negative elements refer to the commented section in the code
#include<iostream>
#include<stack>
using namespace std;
struct stk{
  stack<int>s;
  int min;
  void push(int data){
    if(s.empty()){
      min=data;
      s.push(data);
    }
    else if(data<=min){
      s.push(data-min);
      //s.push(2*data-min);
      min=data;
    }
    else{
      s.push(data);
    }

  }
  int pop(){
    int t=s.top();
    s.pop();
    if(t<=0){ //if(t<=min)
      int res=min;
      min-=t;
      //min=2*min-t;
      return res;
    }
    else{
      return t;
    }
  }
  int peek(){
    int t=s.top();
    return ((t<=0)?min:t);
    //return ((t<=min)?min:t);
  }
  int getmin(){
    return min;
  }
};

int main(){
  stk s;
  s.push(10);
  s.push(13);
  s.push(12);
  s.push(1);
  s.push(9);
  s.push(11);
  s.push(9);
  s.pop();
  s.pop();
  s.peek();
  cout<<"The current minimum element in the stack is "<<s.getmin()<<"\n";
  return 0;
}