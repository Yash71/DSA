//Union of two sorted arrays
//Example: arr[]=(1,2,3,3,4) brr=[]={2,3,3,4}  O/P={1,2,3,4}

  //Naive code
    void uni(int arr[],int brr[],int m,int n){
      int crr[m+n];
      for(int i=0;i<m;i++) crr[i]=arr[i];
      for(int i=0;i<n;i++) crr[i+m]=brr[i];
      sort(crr,crr+(m+n));
      for(int i=0;i<(m+n);i++){
        if(i==0 || arr[i]!=arr[i-1]) cout<<crr[i]<<" ";
      }
    }

  //Efficient Code
    void uni(int arr[],int brr[],int m,int n){
      int i=0,j=0;
      while(i<m && j<n){
        if(i>0 && arr[i]==arr[i-1]) {i++; continue;}
        if(j>0 && brr[j]==brr[j-1]) {j++; continue;}
        
        if(arr[i]<brr[j]) {cout<<arr[i]<<" "; i++;}
        else if(arr[i]>brr[j]) {cout<<brr[j]<<" "; j++}
        else {cout<<arr[i]; i++;j++;}
      }
      while(i<m)
        if(i>0 && arr[i]!=arr[i-1]) {cout<<arr[i]; i++;}
      while(j<n)
        if(j>0 && brr[j]!=brr[j-1]) {cout<<brr[j]; j++;}
    }