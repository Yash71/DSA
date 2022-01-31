#include<iostream>
using namespace std; 

int main(){
    int arr[]={30,20,10};
    int n=3;
    int maxDiff=arr[1]-arr[0];
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(arr[j]-arr[i]>maxDiff){
    //             maxDiff=arr[j]-arr[i];
    //         }
    //     }
    // }

    int minValue=arr[0];
    for(int i=1;i<n;i++){
        maxDiff=max(maxDiff,arr[i]-minValue);
        minValue=min(minValue,arr[i]);
    }
    cout<<maxDiff;
    return 0;
}