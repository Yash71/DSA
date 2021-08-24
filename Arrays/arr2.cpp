//Largest number in the array
  //Naive solution
  #include<bits/stdc++.h>
  using namespace std;

  int largest(int arr[], int n){
    for(int i=0;i<n;i++){
      bool flag=true;
      for(int j=0;j<n;j++){
        if(arr[j]>arr[i]){
          flag=false;
          break;
        }
      }
      if(flag==true){
        return arr[i];
      }
    }
    return -1;
  } // Time complexity --> O(n^2)
  
  //Efficient Code
    int large(int arr[],int n){
      int l=0;
      for(int i=0;i<n;i++){
        if(arr[i]>arr[l]) l=i;
      }
      return arr[l];
    } //Time Complexity -->

  