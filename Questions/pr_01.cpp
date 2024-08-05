// Decimal to binary 
#include <iostream.>
#include <math.h>
using namespace std;

int main()
{
    int n;
    int a = 0, i = 0,b=1;
    cout << "enter the number" << endl;
    cin >> n;
    while (n != 0)
    {
        int bit = n & 1;
        
        if (bit == 1)
        {
            b=1;
        for (int f = 0; f < i; f++)
        {
            b*=10;
        }
        cout << b << endl;
            a = a + b;
        }
        cout << a << endl;
        i++;
        n = n >> 1;
    }
    cout << "entered number in binary is" << a;
    return 0;
}