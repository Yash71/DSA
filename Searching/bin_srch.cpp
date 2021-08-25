//Binary Search
  //Itterative Solution
    int bin_srch(int arr[],int x,int N){
      int start=0, end=N-1;
      while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==x) return mid;
        else if(arr[mid]>x) end=mid-1;
        else start=mid+1;
      }
      return -1;
    }
  //Recursive Solution
  int bin_srch(int arr[],int x,int start, int end){
    if(start>end) return -1; 
    int mid=(start+end)/2;
    if(arr[mid]==x) return mid;
    else if(arr[mid]>x) return bin_srch(arr,start,mid-1,x);
    else return bin_srch(arr, mid+1, end,x); 
  }
