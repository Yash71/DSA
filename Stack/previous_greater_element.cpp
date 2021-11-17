#include<iostream>
#include<stack>
using namespace std;
//naive approach
void print_gr(int arr[],int n){
  for(int i=0;i<n;i++){
    int j;
    for(j=i-1;j>=0;j--){
      if(arr[i]<arr[j]){
        cout<<arr[j]<<" ";
        break;
      }
    }
    if(j==-1) cout<<-1<<" ";
  }
}
//efficient approach
void print_greater(int arr[],int n){
  stack<int>s;
  s.push(arr[0]);
  for(int i=0;i<n;i++){
    while(s.empty()==false && s.top()<=arr[i]){
      s.pop();
    }
    int prev_greater=s.empty()?-1:s.top();
    cout<<prev_greater<<" ";
    s.push(arr[i]);
  }
}
int main(){
  int arr[]={20,30,10,5,15};
    int n=5;
    print_gr(arr,n);
    print_greater(arr,n);
    return 0;
}