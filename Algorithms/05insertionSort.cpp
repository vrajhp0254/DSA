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

    for (int i = 1; i < 5; i++)
    {
        int j,a = ar[i];
        for ( j = i - 1; j >= 0; j--)
        {

            if (ar[j]>a)
            {
                ar[j+1]=ar[j];
            }
            else{
                break;
            }
        }
        ar[j+1]=a;
    }
    cout << "sorted array" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << ar[i] << endl;
    }
    return 0;
}