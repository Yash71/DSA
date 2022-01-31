#include<iostream>
using namespace std; 

int main(){
    int arr[]={10,10,20,20,20,30,30,30};
    int newSize=0;
    for(int i=0;i<7;i++){
        if(arr[i]!=arr[i+1])
        newSize++;
    }
    cout<<newSize+1;
    return 0;
}