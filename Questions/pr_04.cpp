// find the pair of two numbers whose sum is equal to pairsum number
#include <iostream>

using namespace std;

int main()
{
    int arr[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int a, n = 0, i = 0;
    cout << "enter the pairsum number" << endl;
    cin >> a;

    while (n < 10)
    {
        i = n;
        while (i < 10)
        {
            if (arr[n] + arr[i] == a)
            {
                int c = (arr[n] < arr[i]) ? arr[n] : arr[i];
                cout << "pair=" << c << "and" << a - c << endl;
            }
            i++;
        }
        n++;
    }

    return 0;
}