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

  //Sum of digits using recursion
    int dig_sum(int n){
      if(n>=9) return n;
      return dig_sum(n/10)+n%10;
    } //Θ(d)--> Time complexity Θ(d)--> Auxillary space {d=no. of digits in the number}
    //itterative solution is much better as it occupies less auxillary space than the recursive solution
  
  //General Subsets
     void subset(string st, string cur, int i=0){
       if(i==st.length()){
         cout<<cur;
         return;
       }
       subset(st,cur,i++);
       subset(st,cur+st[i],i++);
     }
  //Tower of hanoi
    void TOH(int n, char A, char B, char C){
      if(n==1){
        cout<<"Move 1 from"<<A<<"to"<<C<<endl;
        return;      
      }
      TOH(n-1,A,C,B);
      cout<<"Move"<<n<<"from"<<A<<"to"<<B<<endl;
      TOH(n-1,B,A,C);
    }
  //Josephus Problem
    //there are n people standing n people standing in a circle. Kth person has to be killed everytime in clockwise direction. The last remaining person is the survivor
     int Josephus(int N, int K){
       if(N==1){
         return 0;
       }
       return(Josephus(N-1,K)+K)%N;
     } //Time Complexity --> θ(n)

    //If the position doesn't begin from 0, simply call the function in the main function and add 1 to it
  
  
    