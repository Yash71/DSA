#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, -2, 3, -1, 2};
    int n = 5;
    int finalSum = arr[0];

    // for (int i = 0; i < n; i++)
    // {
    //     int tempSum = 0;
    //     for (int j = i; j < n; j++)
    //     {
    //         tempSum += arr[j];
    //         finalSum = max(finalSum, tempSum);
    //     }
    // }

    // Kadane's Algorithm
    int maxEnding=arr[0];
    for(int i=1;i<n;i++){
        maxEnding=max(maxEnding+arr[i],arr[i]);
        finalSum=max(maxEnding,finalSum);
    }
    cout << finalSum;
    return 0;
}