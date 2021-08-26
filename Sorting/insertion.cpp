//insertion sort
  void insertion (int arr[],int n){
    for(int i=1;i<n;i++){ //traversing through unsorted array
      int current=arr[i];
      int j=i-1; //the element before the element to be compared (sorted array element)
      while(j>=0 && arr[j]>current){
        arr[j+1]=arr[j]; //moving the element in sorted array forward
        j--; //moves to the previous element in sorted array
      }
      arr[j+1]=current;
    }
  }