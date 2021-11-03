// Introduction to pointers
#include<bits/stdc++.h>
using namespace std;

int main(){
  int a=10;
  int *ptr=&a; // reference variable(&) is used to get the address of any variable
  cout<<ptr<<"\n"; //prints the address stored in the pointer or prints the value of the pointer
  cout<<*ptr<<"\n"; //prints the value stored at the memory address pointed by the pointer
  int* *pt=&ptr; //double pointer (here int* works as the int pointer data type)
  cout<<"Value of pt "<<pt<<" value of Address stored in pt "<<*pt<<" Value which indicates address at which pt is pointing "<<**pt;

  int x=5;
  int *y=&x;

  cout<<x<<"\n";
  cout<<&x<<"\n";
  cout<<y<<"\n";
  cout<<*y<<"\n";
  cout<<&y<<"\n";
  return 0;
}