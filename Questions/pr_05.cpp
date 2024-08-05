// To print wave of an 2d array
#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int a = 1;

    for (int i = 0; i < 3; i++)
    {
        if (a == 1)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << arr[j][i];
            }
            a = -1;
        }
        else
        {
            for (int j = 2; j >= 0; j--)
            {
                cout << arr[j][i] << " ";
            }
            a = 1;
        }
        cout << endl;
    }

    return 0;
}
// 00 01 02 03
// 10 11 12 13
// 20 21 22 23
// 1 2 3
// 4 5 6
// 7 8 9