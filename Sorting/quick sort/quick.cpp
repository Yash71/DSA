//Quick Sort using Lomuto Partition
  void swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
  }
  int Lomuto(int arr[], int l, int h){
    int p=arr[h];
    int i=l-1;
    for(int j=l;j<=h-1;j++){
      if(arr[j]<p){
        i++;
        swap(&arr[i],&arr[j]);
      }
    }
    swap(&arr[i+1],&arr[h]);
    return i+1;
  }
  void qsort(int arr[],int l,int h){
    if(l<h){
      int p=Lomuto(arr,l,h);
      qsort(arr,l,p-1);
      qsort(arr,p+1,h);
    }
  }
//Quick Sort using Hoare's Partition
  int Hoare(int arr[],int l, int h){
    int p=arr[l];
    int i=l-1,j=h+1;
    while(true){
      do {i++;} while(arr[i]<p);
      do{j++;} while(arr[j]>p);
      if(i>=j) return j;
      swap(&arr[i],&arr[j]);
    }
  }
  void qsort(int arr[],int l, int h){
    if(l<h){
    int p=Hoare(arr,l,h);
    qsort(arr,l,p);
    qsort(arr,p+1,h);      
    }
  }
