// Find the transpose of a matrix
void transpose(int arr[n][n]){
  int temp=[n][n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      temp[j][i]=arr[i][j];
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      arr[i][j]=arr[i][j];
    }
  }
}
  //Efficient solution
  void transpose_eff(int arr[n][n]){
    for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
        swap(arr[i][j],arr[j][i]);
      }
    }
  }