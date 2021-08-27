void swap(int *x, int *y){
  int temp=*x;
  *x=*y;
  *y=temp;
}
// Naive Partition [Stable]
  int naive(int arr[],int l, int h, int p){
    int temp[h-l+1], ind=0;
    for(int i=l;i<=h;i++){
      if(arr[i]<arr[p]) temp[ind]=arr[i]; ind++;
    }
    for(int i=l;i<=h;i++){
      if(arr[i]==arr[p]) temp[ind]=arr[i]; ind++;
    }
    int pivot=l+(ind-1); //we subtracted 1 because of 1 extra increment in the above for loop 
    for(int i=l;i<=h;i++){
      if(arr[i]>arr[p]) temp[ind]=arr[i]; ind++;
    }
    for(int i=l;i<=h;i++){
      arr[i]=temp[i-l];
    }
    return pivot; //this returns the last occurance of element at index p     
  }
//Lomuto Partition [Unstable]
  int lomuto(int arr[],int l, int h){
    int p=arr[h];
    int i=l-1;
    for(int j=l;j<=h-1;j++){
      if(arr[j]<p){
        i++;
        swap(&arr[i],&arr[j]);
      }
    }
    swap(&arr[i+1],&p);
    return i+1;
  }

//Hoare's Partition [Unstable]
   int hoare(int arr[], int l, int h){
     int p=arr[l];
     int i=l-1, j=h+1;
     while(true){
       do {i++;} while (arr[i]<p);
       do {j--;} while (arr[j]>p);
       if(i>=j) return j;
       swap(&arr[i],&arr[j]);
     }
   }
