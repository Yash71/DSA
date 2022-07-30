//Merging two sorted arrays
//Naive method
int merge(int arr[], int brr[], int m, int n) {
  int crr[m + n];
  for (int i = 0; i < m; i++) {
    crr[i] = arr[i]; //storing the values of arr in crr
  }
  for (int i = 0; i < n; i++) {
    crr[m + i] = brr[i]; //storing the values of brr in crr after arr is stored
  }
  sort(crr, crr + m + n); //using cpp stl or quick sort
  for (int i = 0; i < (m + n); i++) {
    cout << crr[i] << ", ";
  }
} //Time Complexity--> O(m+nlog(m+n)) Auxillary Space-->(m+n)

//Efficient solution
int merge_single(int arr[], int brr[], int m, int n) {
  int i = 0, j = 0;
  while (i < m && j < n) {
    if (arr[i] <= brr[j]) {
      cout << arr[i] << " ";
      i++;
    } 
    else {
      cout << brr[j] << " ";
      j++;
    }
  }
  while (i < m) {
    cout << arr[i] << " ";
    i++;
  }
  while (j < n) {
    cout << brr[j] << " ";
    j++;
  }
} //Time Complexity --> Θ(m+n)

//Here we take a single array with three points namely, the lower, the middle and the highest point. The elements from the lower to the middle are sorted and the elements from the (middle+1) to the higher are sorted. The task is to merge these two sorted parts into one.

int merge(int arr[], int low, int mid, int high) {
  
  //Here we create two auxillary sorted arrays and then we merge them to final array
  int m = mid - low - 1; //size of aux_arr1
  int left[m]; //Auxillary array 1
  int n = high - mid; //size of aux_arr2
  int right[n]; //Auxillary array 2
  for (int i = 0; i < m; i++) left[i] = arr[i + low];
  for (int i = 0; i < n; i++) right[i] = arr[(mid + 1) + i];

  //Merging the two auxillary arrays into the same array
  int i = 0, j = 0, k = low;
  while (i < m && j < n) {
    if (left[i] <= right[j]) {
      arr[k] = left[i];
      i++, k++;
    } 
    else {
      arr[k] = right[j];
      j++, k++;
    }
  }
  while (i < m) {
    arr[k] = left[i];
    i++, k++;
  }
  while (j < n) {
    arr[k] = right[j];
    j++, k++;
  }
} //Time complexity--> Θ(n) Auxillary Space --> Θ(n)

//Merge sort
void merge_sort(int arr[], int l, int r) {
  if (r > l) {
    int mid = l + (l - r) / 2;
    merge_sort(arr, l, mid);
    merge_sort(arr, mid + 1, r);
    merge(arr, l, mid, r);
  }
}
