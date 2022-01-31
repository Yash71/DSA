#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int arr[]={3,0,1,2,5};
    int n=5;
    int totalWaterHeight=0;
//     // for(int i=1;i<n-1;i++){
//     //     int leftPillar=arr[i];
//     //     for(int j=0;j<i;j++){
//     //         leftPillar=max(leftPillar,arr[j]);
//     //     }
//     //     int rightPillar=arr[i];
//     //     for(int j=i+1;j<n;j++){
//     //         rightPillar=max(rightPillar,arr[j]);
//     //     }
//     //     totalWaterHeight+=min(rightPillar,leftPillar)-arr[i];
//     // }
    
    int leftPillar[n];
    int rightPillar[n];
    leftPillar[0]=arr[0];
    for(int i=1;i<n;i++){
        leftPillar[i]= max(leftPillar[i-1],arr[i]);
    }
    rightPillar[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        rightPillar[i]= max(arr[i],rightPillar[i+1]);
    }
    for(int i=0;i<n;i++){
        totalWaterHeight+=min(leftPillar[i],rightPillar[i])-arr[i];
    }
    cout<<totalWaterHeight;
    return 0;
}
