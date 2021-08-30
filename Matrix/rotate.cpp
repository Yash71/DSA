//rotate a given matrix by 90 anti clockwise
void rotate (int arr[n][n]){
  int temp[n][n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      temp[n-j-1][i]=arr[i][j];
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      arr[i][j]=temp[i][j];
    }
  }
} // Time complexity --> Θ(n^2) Auxillary Space Θ(n)

//Efficient Method
  // matrix----> transpose -----> reverse columns
  void rotate90 (int arr[n][n]){
    //transpose of a matrix
    for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
        swap(arr[j][i],arr[i][j]);
      }
    }
    //Reverse array alogrithm
    for(int i=0;i<n;i++){
      int low=0,high=n-1;
      while(low<high){
        swap(arr[low][i],arr[high][i]);
        low++;
        high++;
      }
    }
  } //Time complexity --> Θ(n^2)