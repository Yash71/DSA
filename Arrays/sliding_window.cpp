#include <iostream>
using namespace std;

int main()
{
    // int arr[] = {1, 8, 30, -5, 20, 7};
    // int n = 6, k = 3;
    // int currSum = 0;
    // // Maximum Sum of K Consecutive elements
    // for (int i = 0; i < k; i++)
    // {
    //     currSum += arr[i];
    // }
    // int maxSum = currSum;
    // for (int i = k; i < n; i++)
    // {
    //     currSum += arr[i];
    //     currSum -= arr[i - k];
    //     maxSum = max(maxSum, currSum);
    // }
    // cout << maxSum;

    // Given an unsorted array of *non-negative integers*. Find if there is a subarray with given sum

    /* We increase the size of window until we get a greater/smaller/equal sum
    if it is equal: True;
    if it is smaller: False;
    if it is greater: we remove elements from the beginning and check for above conditions */
    int arr[] = {1, 4, 20, 3, 10, 5};
    int n = 6;
    int sum = 33;
    int currSum = arr[0];
    int start = 0;
    bool flag = false;
    for (int end = 1; end <= n; end++)
    {
        while (currSum > sum && start < end - 1)
        {
            currSum -= arr[start];
            start++;
        }
        if (currSum == sum)
        {
            flag = true;
            break;
        }

        currSum += arr[end];
    }
    flag ? cout << "True" : cout << "False";

    return 0;
}