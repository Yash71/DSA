#include<iostream>
#include<climits>
using namespace std;
struct kstack{
  int *arr,*top,*next;
  int cap,k, freetop;
  kstack(int k1,int n){
    k=k1;
    cap=n;
    arr=new int[cap];
    top=new int[k];
    next=new int[cap];

    for(int i=0;i<k;i++){
      top[i]=-1;
    }
    freetop=0;
    for(int i=0;i<cap-1;i++){
      next[i]=i+1;
      next[cap-1]=-1; //no insertion possible now
    }
  }
  bool isfull(){
    return(freetop==-1);
  }
  bool isempty(int sn){
    return (top[sn]==-1)
  }
  void push(int x, int sn){
    if(isfull()){
      cout<<"Stack Overflow"<<"\n";
      return;
  }
    int i=freetop;
    freetop=next[i];
    next[i]=top[sn];
    top[sn]=i;
    arr[i]=x;
  }
  int pop(int sn){
    if(isempty(sn)){
      cout<<"Stack Underflow"<<"\n";
      return INT_MAX;
    }
    int i=top[sn];
    top[sn]=next[i];
    next[i]=freetop;
    freetop=i;
    return arr[i];
  }
};
int main(){
  int k = 3, n = 10; 
  kstack ks(k, n); 

  ks.push(15, 2); 
  ks.push(45, 2); 
 
  ks.push(17, 1); 
  ks.push(49, 1); 
  ks.push(39, 1); 
 
  ks.push(11, 0); 
  ks.push(9, 0); 
  ks.push(7, 0); 

  cout << "Popped element from stack 2 is " << ks.(2) << endl; 
  cout << "Popped element from stack 1 is " << ks.(1) << endl; 
  cout << "Popped element from stack 0 is " << ks.(0) << endl; 
  return 0;
}