// find mid of sorted array and move for left or right as per conditon 
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[10] = {5, 4, 3, 2, 1, 6, 7, 8, 9, 0};
    int size = 10;
    int s=sizeof(arr)/sizeof(arr[0]);
    cout<<"array size is: "<<s;

    // cout << "enter the array " << endl;
    // for (int i = 0; i < 10; i++)
    // {
    //     cin >> arr[i];
    // }

    sort(arr, arr + size);
    for (int i = 0; i < 10; i++)
    {
        // cout << arr[i];
    }

    cout << "enter the number" << endl;
    int a;
    cin >> a;

    int start = 0, end = size - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        cout << "mid" << mid << endl;

        if (arr[mid] == a)
        {
            printf("enter number is at %d", mid);
            break;
        }

        if (arr[mid] < a)
        {
            start = mid + 1;
        }
        if (arr[mid] > a)
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }

    return 0;
}