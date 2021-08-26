//Selection Sort

  void swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
  }
  //Naive solution
  void selection(int arr[],int n){
    int temp[n];
    for(int i=0;i<n;i++){
      int min_idx=i;
      for(int j=i+1;j<n;j++){
        if(arr[j]<arr[min_idx]) min_idx=j;
      }
      temp[i]=arr[min_idx];
      arr[min_idx]=INF;
    }
    for(int i=0;i<n;i++) temp[i]=arr[i];
  }
  //Efficient solution
  void selsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
      int min_idx=i;
      for(int j=i+1;j<n;j++){
        if(arr[j]<arr[min_idx]) min_idx=j;
      }
      swap(&arr[i],&arr[min_idx]);
    }
  }