#include<iostream>
#include<stack>

using namespace std;
struct stk{
  stack<int>as;
  stack<int>ms;
  void push(int data){
    if(ms.empty()){
      ms.push(data);
      as.push(data);
      return;
    }
    ms.push(data);
    if(ms.top()<=as.top()){
      as.push(data);
    }
  }
  void pop(){
    if(as.top()==ms.top()){
      as.pop();
    }
    ms.pop();
  }
  int getmin(){
    return as.top();
  }
}; //Time complexity: O(1) and Space complexity: O(n)
int main(){
  stk s;
  s.push(10);
  s.push(10);
  s.push(12);
  s.push(3);
  s.push(5);
  s.push(1);
  s.pop();
  s.pop();
  cout<<"Minimum element in the stack is "<<s.getmin();
  return 0;
}