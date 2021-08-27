//sort 3 three different type of elements
// arr[]={2,1,0,1,2,0,1} O/P-->{0,0,1,1,1,2,2}

 // Dutch National Flag Algorithm
int sort3(int arr[], int n){
  int l=0, m=0, h=n-1;
  while(m<=h){
    if(arr[m]==0){
      swap(arr[l],arr[m]);
      l++;
       m++;
    }
    else if(arr[m]==1) m++;
    else{
      swap(arr[m],arr[h]);
      h--;
    }
  }
}