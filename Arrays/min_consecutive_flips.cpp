#include <iostream>
using namespace std;

// in a binary string the number of groups of 1 and 0 would either differ by 1 or by 0(they are equal)
// For the groups to be equal, the first element and the last element would be different and vice versa

// To achieve the minimum flips we begin the flipping from the second group(either 0s group or 1s group)
int main()
{
    int arr[] = {0, 0, 1, 1, 0, 0, 1, 1, 0, 1};
    int n = 10;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            if (arr[i] != arr[0])
            {
                cout << "From " << i << " to ";
            }
            else
            {
                cout << (i - 1) << "\n";
            }
        }
    }
    if (arr[0] != arr[n - 1]) // to handle the last element in the array
    {
        cout << n - 1 << "\n";
    }
    return 0;
}