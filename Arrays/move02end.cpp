#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 0, 5, 0, 8, 20, 1, 0};
    // for (int i = 0; i < 8; i++)
    // {
    //     if (arr[i] == 0)
    //     {
    //         for (int j = i + 1; j < 8; j++)
    //         {
    //             if (arr[j] != 0)
    //             {

    //                 swap(arr[i], arr[j]);
    //                 break;
    //             }
    //         }
    //     }
    // }

    int count=0;
    for(int i=0;i<8;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}