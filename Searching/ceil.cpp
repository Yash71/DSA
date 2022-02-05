// find the ceiling of a target in the sorted array
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 3, 5, 9, 14, 16, 18};
    int n = 7;
    int target = 15;
    int ceil_value = -1;
    int low = 0;
    int high = n - 1;
    bool flag = false;
    while (low <= high)
    {
        int middle = (low + high) / 2;
        if (arr[middle] == target)
        {
            flag = true;
            ceil_value = arr[middle];
            break;
        }
        if (arr[middle] > target)
            high = middle - 1;
        else
            low = middle + 1;
    }
    flag ? cout << ceil_value : cout << arr[low];
    return 0;
}
