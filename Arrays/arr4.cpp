//reverse an array
#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int n){
  int low=0, high=n-1;
  while(low<high){
    int temp=arr[low];
    arr[low]=arr[high];
    arr[high]=temp;
    low++;
    high--;
  }
}

int main(){
  int arr[]={1,2,3,4,4};
  reverse(arr,5);
  for(auto it: arr){
    cout<<it<<" ";
  }
  return 0;
}