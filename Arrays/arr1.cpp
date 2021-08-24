#include<bits/stdc++.h>
using namespace std;

//Insertion in an array
  int insert(int arr[], int n, int pos, int x, int cap){
    if(n==cap) return n;
    int idx=pos-1;
    for(int i=n-1;i>=idx;i--){
      arr[i+1]=arr[i];
    } 
    arr[idx]=x;
    return(n+1);
  } 
  //Time complexity--> O(n)
  //Insertion at the end--> O(1)
  //Insertion at the beginning --> Θ(n)  

//Deletion in an array
int deletion)(int arr[], int n,int x){
  int i;
  for(i=0; i<n;i++){
    if(arr[i]==x) break;
  }
  if(i==n) return n;
  for(int j=i; j<n-1;j--){
    arr[j]=arr[i]
  }
  return n-1;
} // Time complexity --> Θ(n)