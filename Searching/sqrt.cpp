//Find the square root of a number
  #include<bits/stdc++.h>
  using namespace std;

  int sqroot(int x){
    int start=1, end=x, ans=-1;
    while(start<=end){
      int mid=(start+end)/2;
      int ms=mid*mid;
      if(ms==x) return mid;
      else if(ms>x) end=mid-1;
      else {start=mid+1; ans=mid;} //we store our answer to try to find the nearest sq root for the number. [very similar to last occurance]
    }
    return ans;  
  }
  int main(){
    int x;
    cin>>x;
    cout<<sqroot(x);
    return 0;
  }