// Given an unsorted array and a number x. Check if a pair exists in the array whose sum is equal to the number

#include<bits/stdc++.h>
using namespace std;
bool naive(int arr[],int x,int n){
  //Naive solution
  for(int i=0;i<n;i++){
    int val=x-arr[i];
    for(int j=0;j<n;j++){
      if(arr[j]==val) return true;
    }
  }
  return false;
}
  //Efficient solution --> Hashing

//Given a sorted array and a number x. Check if a pair exits in the array whose sum is equal to the number

bool point_2(int arr[],int x,int n){
  int low=0, high=n-1;
  while(low<high){
    int sum=arr[low]+arr[high];
    if(sum==x) return true;
    else if(sum>x) high--;
    else low++;
  }
  return false;
}
int main(){
  int arr[]={1,4,5,2,6,7};
  int x=20;
  // cout<<naive(arr,x,6)<<endl;
  cout<<point_2(arr, x, 6);
  return 0;
}
