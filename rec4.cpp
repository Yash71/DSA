//Problems
//print natural number sum using recursion
int getsum(int n){
  if(n==0){
    return 0;
  }
  return n+getsum(n-1); // Θ(n) -->Time Θ(n)--> Auxillary space
}

//palindrome check using recursion
int str=0;
int end=n-1;
bool palindrome(string st, int str, int end){
  if(str>=end) return true;
  return (st[str]==st[end]) && palindrome(st, str+1, end-1);

} //O(n) --> Time complexity O(n)--> Auxillary Space