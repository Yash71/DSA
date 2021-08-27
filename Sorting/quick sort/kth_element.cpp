//Find the kth smallest element in the given unsorted array
//Eg-{1,4,2,9} K=2 O/P--> 2
//----NOTE--- Duplicates are not allowed in the array
  //Naive solution
    int kthsmallest(int arr[],int n,int k){
      sort(arr,arr+n);
      return arr[k-1];
    } //T.C --> O(nlogn)

  //Efficient solution
    //Quick Select Algorithm
    void swap(int *x,int *y){
      int temp=*x;
      *x=*y;
      *y=temp;
    }
    int lomuto(int arr[],int l,int h){
      int i=l-1;
      int p=arr[h];
      for(int j=l;j<h-1;j++){
        if(arr[j]<p){
          i++;
          swap(&arr[i],&arr[j]);
        }
      }
      swap(&arr[i+1],&p);
      return i+1;

    }
   int kthsmallest(int arr[],int n, int k){
     int l=0,h=n-1;
     while(l<=h){
       int p=lomuto(arr,l,h);
       if(p==k-1) return p;
       else if(p>k-1) h=p-1;
       else l=p+1;
     }
     return -1;
   }