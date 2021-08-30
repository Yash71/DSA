// Print the matrix in snake pattern 
// I/P: 1  2  3  4 
//      5  6  7  8
//      9 10  11 12 
// O/P: 1 2 3 4 8 7 6 5 9 10 11 12     

#include<iostream>
#include<vector>
using namespace std;
void print(vector<vector<int>> arr){
  for(int i=0;i<arr.size();i++){
    if(i%2==0){
      for(int j=arr.size()-1;j>0;j--){
        cout<<arr[i][j]<<" ";
      }
    }
    else{
      for(int j=0;j<arr.size();j++){
        cout<<arr[i][j]<<" ";
      }
    }
  }
}