#include<iostream>
using namespace std; 

int main(){
    int arr[]={10,12,8,4};
    int n=4;
    int i=0;
    int j=1;
    int actualLength=1;
    int tempLength=1;
    while(j<n){
        if((arr[i]+arr[j])%2==0){
            tempLength=1;
            i=j;
            j++;
        }
        else{
            tempLength++;
            actualLength=max(actualLength,tempLength);
        }
        i=j;
        j++;
    }
    cout<<actualLength;
    return 0;
}