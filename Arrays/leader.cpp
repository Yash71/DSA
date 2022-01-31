#include<iostream>
using namespace std; 

int main(){
    int arr[]={7,10,4,10,6,5,2};
    int n=7;
    // for(int i=0;i<n;i++){
    //     bool flag=true;
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i]<=arr[j]){
    //             flag=false;
    //             break;
    //         }
            
    //     }
    //     if(flag){
    //             cout<<arr[i]<<" ";
    //         }
    // }
    int currLeader=arr[n-1];
    cout<<currLeader<<" ";
    for(int i=n-2;i>=0;i--){
        if(currLeader<arr[i]){
            currLeader=arr[i];
            cout<<currLeader<<" ";
        }
    }
    return 0;
}