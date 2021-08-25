// Determine the first occurence of the given element in duplicate sorted array
  //Naive solution (Linear Search)
    int firstocc( int arr[],int x,int n){
      for(int i=0;i<n;i++){
        if(x==arr[i]) return i;
      }
      return -1;
    }
  //Recursive Function
    int firstocc(int arr[],int x,int low, int high){
      if(low>high) return -1;
      int mid=(low+high)/2;
      if(x>arr[mid]) return firstocc(arr,x,mid+1,high);
      else if(x<arr[mid]) return firstocc(arr,x,low,mid-1);
      else{
        if(mid==0||arr[mid-1]!=arr[mid]) return mid;
        else return firstocc(arr,x,low,mid-1);
      }
    }
  //Itterative Function
  int firstocc(int arr[],int n,int x){
    int start=0, end=n-1;
    while(start<=end){
      //binary search
        int mid=(start+end)/2;
        if(arr[mid]>x) start=mid+1;
      //binary search
      //element occurence
        else{
          if(mid==0 || arr[mid-1]!=arr[mid]) return mid;
          else end=mid-1;
        }
      //element occurence
    }
    return -1;
  }

// Last Occurence of an element in a duplicate sorted array
  //recursive function
    int last_occ(int arr[], int low,int high, int x, int n){
      if(low>high) return -1;
      //Binary Search
      int mid=(low+high)/2;
      if(arr[mid]>x) return last_occ(arr,low,mid-1,x,n);
      else if(arr[mid]<x) return last_occ(arr, mid+1, high,x,n);
      //Binary Search
      //Occurence check
      else{
        if(mid==n-1 || arr[mid]!=arr[mid+1]) return mid;
        else return last_occ(arr,mid+1,high,x,n);
      }
      //Occurence Check
    }

  //iiterative solution
  int last_occ(int arr[],int x,int n){
    int start=0, end=n-1;
    while(start<=end){
      int mid=(start+end)/2;
      if(arr[mid]>x) end=mid-1;
      else if(arr[mid]>x) start=mid+1;
      else{
        if(arr[mid]==n-1 || arr[mid]!=arr[mid+1]) return mid ;
        else start=mid+1;
      }
    }
  }