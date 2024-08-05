#include <iostream>
using namespace std;
int binarysearch(int *arr, int s, int e, int key)
{
    if (s <= e)
    {
        int m = s + (e - s) / 2;
        if (arr[m] == key)
        {
            return m;
        }
        if (arr[m] > key)
        {
            return binarysearch(arr, s, m - 1, key);
        }
        else
        {
            return binarysearch(arr, m + 1, e, key);
        }
    }
    return -1;
}
int main()
{
    int arr[]{12,23,34,45,56,67,78,89};
    // int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    cin >> key;
    int s = 0;
    int e = sizeof(arr) / sizeof(arr[0]) - 1;

    cout << binarysearch(arr, s, e, key);
    return 0;
}