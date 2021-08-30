//finding element in row and column sorted matrix
  //Naive solution
    void search(int arr[m][n],int x){
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
          if(arr[i][j]==x){
            cout<<"Found element at ("<<i<<", "<<j")";
            return;
          } 
        }
      }
      cout<<"Element not found";
    } // Time complexity --> Θ(m*n)
  
  //Efficient solution
    void search(int arr[m][n], int x){
      int left=0,right=n-1;
      while(left<m && right>=0){
        if(arr[left][right]==x){
          cout<<left<<","<<right; 
          return;
        }
        else if(arr[left][right]>x) right--;
        else left++;
      }
      cout<<"not found";
    }