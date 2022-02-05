#include<iostream>
using namespace std; 

int main(){
    int stock[]={7,1,5,3,6,4};
    int n=6;
    
    int minRate=stock[0];
    int profit=0;
    for(int i=1;i<n;i++){
        minRate=min(minRate,stock[i]);
        profit=max(stock[i]-minRate,profit);
    }
    cout<<profit<<"\n";
    return 0;
}