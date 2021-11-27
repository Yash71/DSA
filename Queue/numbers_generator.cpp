//generate numbers from given set of numbers
//example: [2,3,7,9] =={2,3,7,9,22,23,27,29,32,33,37,39,72,73,77}

#include<iostream>
#include<queue>
using namespace std;
void generatenums(){
  int d;
  cin>>d;
  int digits[d];
  for(int i=0;i<d;i++){
    cin>>digits[i];
  }
  int n;
  cin>>n;

  //implementation
  if(n<=d){
    for(int i=0;i<n;i++){
      cout<<digits[i]<<" ";
    }
  }
  else{
    queue<int>q;
    for(int i=0;i<d;i++){
      q.push(digits[i]);
    }
    int inserted=d, printed=0;
    while(printed<n){
      int temp=q.front();
      q.pop();
      cout<<temp<<" ";
      printed++;
      // if(inserted<n)
        for(int i=0; inserted<n && i<d;i++){
          if(inserted<n){
            q.push(temp*10+digits[i]);
            inserted++;
          }
        }
      
    }
  }
}
int main(){
     generatenums();
     return 0;
}