// longest subarray in AP with common difference of k
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int n,k,count,maxLength=INT_MIN;
    vector<int> arr(n);

    cin>>n;
    cin>>k;
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=1;i<n;i++){
        if(arr[i]-arr[i-1]==k) count++;
        else count=1;
        maxLength=max(maxLength,count);
    }
    cout<<maxLength<<"\n";
    return 0;
}
