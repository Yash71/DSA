//Implementation of stack using vectors
#include<iostream>
#include<vector>
using namespace std;
struct stack{
  vector<int> v;
  void push(int data){
    v.emplace_back(data);
  }
  int pop(){
    int res=v.back();
    v.pop_back();
    return res;
  }
  int peek(){
    return v.back();
  }
  int size(){
    return v.size();
  }
  int isempty(){
    return v.empty();
  }
};
int main(){
stack s;
s.push(10);
s.push(20);
s.push(30);
s.push(40);
cout<<s.pop()<<"\n";
cout<<s.peek()<<"\n";
cout<<s.size()<<"\n";
cout<<s.isempty()<<"\n";

return 0;
}