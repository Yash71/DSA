// searching an element in an infinte sorted array
  //Naive solution Traverse through the array --> Time complexity --> O(pos); pos: position of the resultant element

  //Efficient solution
  int bin_srch(int arr[],int low,int high,int x){
    if(low>high) return -1;
    int mid=(low+high)/2;
    if(arr[mid]>x) return bin_srch(arr, low, mid-1, x);
    else return bin_srch(arr, mid+1, high, x);
  }
  int infi(int arr[],int x){
    if(arr[0]==x) return 0;
    int i=1;
    while(arr[i]<x)
    i=i*2;
    if(arr[i]==x) return i;
    return bin_srch(arr,(i/2)+1,i-1,x);        
  }