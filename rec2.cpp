//applications of recursion
//algorithms using recursion --> DP, backtracking, Divide and Conquer (binary search, quick sort and merge sort)
//problems inheriting recursion--> Tower of Hanoi, DFS based traversals
void fun(int n){
  if(n==0) return;
  cout<<n<<", ";
  fun(n-1);
  cout<<n<<", ";
}
int main(){
  fun(3);
  return 0;
} //Output--> 3,2,1,1,2,3

void fun(int n){
  if(n==0) return;
  fun(n-1);
  cout<<n<<", ";
  fun(n-1);
}
int main(){
  fun(3);
  return 0;
} //outupt--> 1, 2, 1, 3, 1, 2, 1

//what will be the return value for fun(16)
int fun(int n){
  if (n==1) return 0;
  else return 1+ fun(n/2);
} //output--> 4

// for general n>=1, the above function returns logbase2(n)

//what will be the return value for n=7
void fun(int n){
  if(n==0) return;
  fun(n/2);
  cout<<(n/2);
} //output--> 111

//for general n>0 , the above function prints the binary equivalent of n
