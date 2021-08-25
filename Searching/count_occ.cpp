//Count the number of 1 in sorted binary array
  //Naive solution --> Linear Search
  //Efficient solution  
    int count_occ(int arr[],int n){
      int start=0, end=n-1;
      while(start<=end){
        //binary search
        int mid=(start+end)/2;
        if(arr[mid]==0) start=mid+1;
        //binary search
        else{
          if(mid==0 || arr[mid-1]!=arr[mid]) return (n-mid);
          else end=mid-1;
        }
      }
      return 0;
    }