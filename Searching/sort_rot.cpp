// Find the element in the sorted rotated array
int sort_rot(int arr[],int n, int x){
  int low=0, high=n-1;
  while(low<=high){
    //binary search
      int mid=(low+high)/2;
      if(arr[mid]==x) return mid;
    //binary search
    //left sorted
      if(arr[mid]>arr[low]){
        if(x>=arr[low] && x<arr[mid]) high=mid-1;
        else low=mid+1;      
      }
    //left sorted
    //right sorted
      else{
        if(x>arr[mid] && x<=arr[high]) low=mid+1;
        else high=mid-1;
      }
    //right sorted
  }
  return -1;
}