//prints n to 1 using recursion
#include<iostream>
using namespace std;

void print_n21(int n){
  if(n==0) return;
  cout<<n<<" ";
  print_n21(n-1);
}
//prints 1 to n using recursion
void print_12n(int m){
  if(m==0) return;
  print_12n(m-1);
  cout<<m<<" ";
}
int main(){
  int n;
  cin>>n;
  print_n21(n); //prints n to 1
  print_12n(n); //prints 1 to n
  return 0;
}
//----------------tail recursion--------------------

//printing n to 1 is much faster than printing 1 to n because print_n21 uses tail recursion.

//modern compilers use tail call elimination
// they replace the recursive call with the parameter change and goto start

void print_n21(int n){
  start:
    if(n==0) return;
    cout<<n<<" ";
    print_n21(n-1); //-->  n=n-1; goto start; 
}
// print_12n() can be made tail recursive
int k=1;
void print_12n(int n, int k){
  if(n==0) return;
  cout<<k;
  print_12n(n-1,k+1);
}
//print factorial using tail recursion
int x=1;
int fact(int n, int x){
  if(n==0||n==1){
    return x;
  }
  return fact(n-1,n*x);
}
//----------------tail recursion--------------------
