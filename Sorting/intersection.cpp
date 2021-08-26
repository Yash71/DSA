//Intersection of two arrays
//Example: arr[]={1,2,3,3,4,5} brr[]={2,4,5} O/P: {2,4,5}
//Naive solution
  int intersection(int arr[],int brr[],int m,int n){
    for(int i=0;i<m;i++){
      if(i>0 && arr[i]==arr[i-1]) continue; //Used to skip duplicates in the same array
      for(int j=0;j<n;j++){
        if(arr[i]==arr[j]) cout<<arr[i]<<" "; break;
      }
    }
  }

//Efficient Solution
  int intersection(int arr[],int brr[],int m,int n){
    int i=0,j=0;
    while(i<m && j<n){
      if(i>0 && arr[i]==arr[i-1]) {i++; continue;}
      if(arr[i]<brr[j]) i++;
      else if(arr[i]>brr[j]) j++;
      else {cout<<arr[i]; i++;j++;}
    }
  }