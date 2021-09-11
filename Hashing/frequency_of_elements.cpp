#include<iostream>
#include<unorderd_map>
using namespace std;

void countfreq(int arr[], int n){
    unorderd_map<int,int> mpp;
    for(int i=0;i<n;i++) mpp[arr[i]]++;
    for(auto it: mpp) cout<<mpp.first<<" "<<mpp.second<<endl;
} //the order of keys won't be fixed. To resolve this you can use map
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    countfreq(); //time complexity : Θ(n) Auxillary Space: O(n)
    return 0;
}