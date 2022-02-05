// find the first and last position of the element in sorted array
#include<iostream>
#include<vector>
using namespace std;

int targetIndex(int arr[],int n,int target,bool firstIndex){
    int low=0;
    int high=n-1;
    int index=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            index=mid;
            firstIndex?high=mid-1:low=mid+1;
            
        }
        else{
            arr[mid]>target ? high=mid-1:low=mid+1;
        }
    }
    return index;
}
int main(){
    int arr[]={5,7,7,7,8,8,10};
    int target=7;
    int n=7;
    vector<int>ans(2);
    ans[0]= targetIndex(arr,n,7,true);
    ans[1]= targetIndex(arr,n,7,false);

    for(auto it:ans) cout<<it<<" ";
    return 0;
}