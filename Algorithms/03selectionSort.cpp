#include <iostream>
using namespace std;

int main()
{
    int ar[5];
    cout << "enter the array elements" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> ar[i];
    }
    cout << "entered array" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << ar[i] << endl;
    }

    for (int i = 0; i < 5; i++)
    {
        int a = i, j;
        for (j = i + 1; j < 5; j++)
        {
            if (ar[j] < ar[a])
            {
                a = j;
            }
        }
        int temp = ar[i];
        ar[i] = ar[a];
        ar[a] = temp;
    }

    cout << "sorted array" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << ar[i] << endl;
    }
    return 0;
}