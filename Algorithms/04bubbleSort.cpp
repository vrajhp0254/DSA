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
        for (int j = 0; j < 4-i; j++)
        {
            if (ar[j+1]<ar[j])
            {
                ar[j+1]=ar[j+1]+ar[j];
                ar[j]=ar[j+1]-ar[j];
                ar[j+1]=ar[j+1]-ar[j];
            }
            
        }
        
    }
    cout << "sorted array" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << ar[i] << endl;
    }
    return 0;
}