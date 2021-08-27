//Chocolate distribution problem
// Given an array of n integers where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are m students, the task is to distribute chocolate packets such that: 
//--Rule 1-- Each child should get 1 packet
//--Rule 2-- The difference between the min and max chocolates in the given set of packets should be minimum.

int mindiff(int arr[],int n, int m){
  if(n<m) return -1; //Number of students can never be greater than number of packets
  sort(arr,arr+n);
  int res=arr[m-1]-arr[0]; //assign the minimum difference
  
  //We need to find the subarray of size m, where the differrence between the [m-1] and [0] element is minimum
  for(int i=1; (i+(m-1))<n;i++){
    res=min(res,arr[i+(m-1)]-arr[i]);
  }
  return res;
}
