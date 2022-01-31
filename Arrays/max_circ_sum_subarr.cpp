#include<iostream>
using namespace std; 
int normalSum(int arr[],int n){
    int finalNormalSum=arr[0];
    int maxEnding=arr[0];
    for(int i=1;i<n;i++){
        maxEnding=max(maxEnding+arr[i],arr[i]);
        finalNormalSum=max(finalNormalSum,maxEnding);
    }
    return finalNormalSum;    
}
int maxSum(int arr[],int n){
    int maxNormal=normalSum(arr,n);
    if(maxNormal<0){
        return maxNormal;
    }
    int sumarray=0;
    for(int i=0;i<n;i++){
        sumarray+=arr[i];
        arr[i]=-arr[i];
    }
    int maxCircularSum=sumarray+ normalSum(arr,n);
    return max(maxNormal,maxCircularSum);

}
int main(){
    int arr[]={5,-2,3,4};
    int n=4;
    int finalSum=arr[0];
    // for(int i=0;i<n;i++){
    //     int currSum=arr[i];
    //     int currMaxSum=arr[i];
    //     for(int j=1;j<n;j++){
    //        int circularIndex=(i+j)%n;
    //         currSum+=arr[circularIndex];
    //         currMaxSum=max(currMaxSum,currSum);
    //     }
    //     finalSum=max(finalSum,currMaxSum);
    // }
    finalSum=maxSum(arr,n);
    cout<<finalSum;
    return 0;
}