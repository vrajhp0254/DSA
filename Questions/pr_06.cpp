// spiral print of an 2d array
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int total = 9, count=0;
    int r = 2, c = 2, r0 = 0, c0 = 0;
    for (int i = 0; count <= total; i++)
    {
        for (int i = c0; count < total && i <= c; i++)
        {
            cout << arr[r0][i];
            count++;
        }
        r0++;

        for (int i = r0; count < total && i <= r; i++)
        {
            cout << arr[i][c];
            count++;
        }
        c--;

        for (int i = c; count < total && i >= c0; i--)
        {
            cout << arr[r][i];
            count++;
        }
        r--;

        for (int i = r; count < total && i >= r0; i--)
        {
            cout << arr[i][c0];
            count++;
        }
        c0++;
    }

    return 0;
}
// 00 01 02 03
// 10 11 12 13
// 20 21 22 23
// 30 31 32 34