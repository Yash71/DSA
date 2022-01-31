#include<iostream>
using namespace std; 
void reverse(int arr[],int low, int high){
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int d=2;
    // for(int i=0;i<d;i++){
    //     int temp=arr[0];
    //     for(int i=1;i<n;i++){
    //         arr[i-1]=arr[i];
    //     }
    //     arr[n-1]=temp;
    // }

    // int tempArr[d];
    // for(int i=0;i<d;i++){
    //     tempArr[i]=arr[i];
    // }
    // for(int i=d;i<n;i++){
    //     arr[i-d]=arr[i];
    // }
    // for(int i=0;i<d;i++){
    //     arr[n-d+i]=tempArr[i];
    // }
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
    
    for(auto it:arr) cout<<it<<" ";
    return 0;
}
