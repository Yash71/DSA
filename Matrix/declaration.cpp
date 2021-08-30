//vectors of vectors 
#include<iostream>
#include<vector>

using namespace std;
int main(){
  int m=3, n=2;
  //Create a 2D vector
  vector<vector<int>> arr;
  for(int i=0;i<m;i++){
    vector<int> v1;
    for(int j=0;j<n;j++){
      v1.emplace_back(10);
    }
    arr.emplace_back(v1);
  }
  //Create a 2D vector

  //Printing the 2D vector
  for(int i=0;i<arr.size();i++){
    for(int j=0;j<arr.size();j++){
      cout<<arr[i][j]<<" ";
    }
  }
  return 0;
}

//Declartion of 2D arrays as arguments in function
void print(int **arr, int m, int n){
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cout<<arr[i][j]<<" ";
    }
  }
}
int main(){
  int **arr; //create a double pointer
  int m=3,n=2;
  arr= new int*[m]; //arr pointing to array of pointers
  for(int i=0;i<m;i++){
    arr[i]=new int[n]; //each pointer pointing to dynamically allocated rows of fixed sizes
    for(int j=0;j<n;j++){
      arr[i][j]=i; //assign value to every block
    }
  }

}