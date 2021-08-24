//Array is sorted in ascending order
  #include<bits/stdc++.h>
  using namespace std;
  int sorted(int arr[],int n){
    for(int i=0;i<n;i++){
      if(arr[i-1]>arr[i]){
        return false;
      }   
    } 
    return true;
  }
  
  int main(){
    int arr[]={1,1,2,6};
    cout<<sorted(arr,4);
    return 0;
  }
