#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3,7,4,7,7,5};
    int n = 6;
    // int finalCount = 0;
    // int index = -1;
    // for (int i = 0; i < n; i++)
    // {
    //     int tempCount = 0;
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             tempCount++;
    //             index = max(index, i);
    //             finalCount = max(tempCount, finalCount);
    //         }
    //     }
    // }
    // finalCount > n / 2 ? cout << index : cout << "-1";


    // Moore Voting Algorithm
    
    int finalCount=1;
    int index=0;
    // selecting the right candidate
    for(int i=1;i<n;i++){
        arr[index]==arr[i] ? finalCount++:finalCount--;
        if(finalCount==0){
            index=i;
            finalCount=1;
        }
    }
    // checking if its actually a majority element
    finalCount=0;
    for(int i=0;i<n;i++){
        if(arr[index]==arr[i]){
            finalCount++;
        }
    }
    finalCount > n / 2 ? cout << index : cout << "-1";
    return 0;
}