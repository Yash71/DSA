#include<iostream>
#include<unordered_set>
using namespace std;
//Naive solution
int countdig(int arr[],int n){
    int res=0;
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                flag=true;
                break;
            }
        }
        if(flag==false) res++;
    }
    return res;
} //Time complexity--> O(n^2)
//Efficient Solution
int countdig(int arr[],int n){
    unordered_set<int> st;
    for(int i=0; i<n;i++){
        s.insert(arr[i]);
    }
    return s.size();
} //Time complexity --> Θ(n) Auxillary Space --> O(n)

//Shorthand
unordered_set<int> st(arr,arr+n);
return r.size(); 