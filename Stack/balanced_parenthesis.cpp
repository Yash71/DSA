#include<iostream>
#include<string>
#include<stack>
using namespace std;
bool matching(char a, char b){
  return (( a=='(' && b==')' )||( a=='[' && b==']' )||( a=='{' && b=='}' ));
}
bool isbalanced(string s){
  stack<int> stk;
  for(char x: s){
    if(x=='('|| x=='['||x=='{') stk.push(x);
    else{
      if(stk.empty()==false) return false;
      if(matching(stk.top(),x)==false) return false;
      else stk.pop();
    }
  }
  return (s.empty()==true);
}
int main(){
  string s;
  cin>>s;
  if(isbalanced(s)) cout<<"Balanced"<<"\n";
  else cout<<"Unbalanced"<<"\n";
}