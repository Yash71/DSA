// find the peak element in an unsorted array
//We say an element is a peak element if the surrounding 2 elements are smaller the pointing element

int peak(int arr[], int n){
  int low=0, high=n-1;
  while(low<=high){
    int mid=(low+high)/2;
    if((mid==0 || arr[mid-1]<arr[mid]) && (mid==(n-1) || arr[mid+1]<arr[mid])) return mid;
    if(mid>0 && arr[mid-1]>=arr[mid]) high=mid-1;
    else low=mid+1; 
  }
  return -1;
}