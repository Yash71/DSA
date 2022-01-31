#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    for(int i=0;i<4;i++){
        swap(arr[i],arr[i+1]);
    }
    for(auto it:arr) cout<<it<<" ";
    return 0;
}