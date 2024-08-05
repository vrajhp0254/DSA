// find the common number in two array 
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[10] = {1, 3, 6, 8, 3, 5, 9, 89, 45, 23};
    int brr[10] = {2, 7, 4, 11, 23, 9, 3, 2, 23, 45};
    sort(arr, arr + 10, less<int>());
    sort(brr, brr + 10, less<int>());
    // cout<<"1err"<<endl;
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<arr[i]<<endl;
    // }
    // cout<<"2err"<<endl;
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<brr[i]<<endl;
    // }
    
    int j = 0, k = 0, n = 10;

    // while (j < 10)
    // {
    //     k = 0;
    //     while (k < 10)
    //     {
    //         if (arr[j] == brr[k])
    //         {
    //             // cout<<"j="<<j<<endl<<"k="<<k<<endl;
    //             cout << arr[j] << endl;
    //             brr[k] = -1;
    //             break;
    //         }
    //         k++;
    //     }
    //     j++;
    // }

    while (j < n && k < n)
    {
            // cout<<"j="<<j<<endl<<"k="<<k<<endl;
        if (arr[j] == brr[k])
        {
            cout << arr[j] << endl;
            j++;
            k++;
        }
        else if (arr[j] < brr[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }

    return 0;
}