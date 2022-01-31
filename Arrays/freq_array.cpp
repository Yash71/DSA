#include<iostream>
using namespace std; 

int main(){
    int arr[]={10,10,10,30,30,40};
    int n=6;
    
    int freq=1;
    int i=1;
    while(i<n){
        while(i<n && arr[i]==arr[i-1]){
            freq++;
            i++;
        }
        cout<<arr[i-1]<<":"<<freq<<"\n";
        i++;
        freq=1;
    }
    if(n==1 || arr[n-1]!=arr[n-2]){
        cout<<arr[n-1]<<":"<<1;
    }

    return 0;
}