#include <iostream>
using namespace std;

int main()
{
    int arr[] = {0, 1, 1, 0, 1, 0};
    int n = 6;
    int finalCounter = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     int tempCounter = 0;
    //     if (arr[i] == 1)
    //     {
    //         for (int j = i; j < n; j++)
    //         {
    //             if (arr[j] == 1)
    //                 tempCounter++;
    //         }
    //     }
    //     finalCounter = max(finalCounter, tempCounter);
    // }
    
        int tempCounter=0;    
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            tempCounter=0;
        }
        else{
            tempCounter++;
            finalCounter=max(finalCounter,tempCounter);
        }
    }
    cout << finalCounter;
    return 0;
}
