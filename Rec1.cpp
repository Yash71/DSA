//Recursion
  // A function calls itself directly or indriectly
    //direct Recursion
      void fun1(){
        //code
        fun1();
      } 
    //indirect Recursion
      void fun1(){
        //code
        fun2();
      }
      void fun2(){
        //code
        fun1();
      }
  //never ending recursive function
  void fun1(){
    cout<<"Call"<<", ";
    fun1();
  }
  int main(){
    fun1();
    return 0;
  } //output Call, Call, Call, Call, Call segmentation fault

  //never ending recursive function
  //fix for never ending recursive function
    void fun1(int n){
      if(n==0){ //base case
        return;
      }
      cout<<"call"<<", ";
      fun1(n-1);
    }
    int main(){
      fun1(2);
      return 0;
    }
    //to fix the never ending recursive functions we need to write some recursion termination conditions which are known as base cases

    // structure of a recursive function
      // fun(....){
      //   base cases
      //   //code
      //   recursive call(i.e. call to fun()) with atleast one change in parameter
      // }