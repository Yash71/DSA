#include<iostream>
#include<stack>
#include<vector>
using namespace std;
//naive approach
void next_gr(int arr[],int n){
  for(int i=0;i<n;i++){
    int j;
    for(j=i+1;j<n;j++){
      if(arr[j]>arr[i]){
        cout<<arr[j]<<" ";
      }
    }
    if(j==n) cout<<"-1"<<" ";
  }
}
//efficient approach
vector<int> next_greater(int arr[],int n){
  vector<int> v;
  stack<int>s;
  s.push(arr[n-1]);
  for(int i=n-2;i>=0;i--){
    while(s.empty()==false && s.top()<=arr[i]) s.pop();
    int next_greater=(s.empty())?(-1):(s.top());
    v.emplace_back(next_greater);
    s.push(arr[i]);
  }
  return v;
}
int main(){
  int arr[]={5,15,10,8,6,12,9,18};
  int n=8;
  next_gr(arr,n);
  
  return 0;
}