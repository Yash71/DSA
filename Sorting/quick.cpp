// Quick Sort
   int quicksort(int arr[], int n){
     for(int i=0;i<n-1;i++){ //loop for passes
       for(int j=0; j<n-1;j++){ //loop for array index
         if (arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
       }
     }
   }
   //Optmised code
    int quickSort(int arr[],int n){
      for(int i=0; i<n-1;i++){
        for(int j=0;j<(n-1)-i;j++){
          if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
        }
      }
    }
    //Since an element is already fixed at a position after every pass, we don't need to check it to traverse to that position.
  
  //Further Optimisation
    int qsort(int arr[],int n){
      for(int i=0; i<n-1;i++){
        bool swapped=false; //To check if the array is already sorted or got sorted at an instance while executing the loop
        for(int j=0;j<(n-1)-i;j++){
          if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            swapped=true;
          }
        }
        if(swapped==false) break;
      }
    }
    //If the array is already sorted or the array got sorted in the middle
  