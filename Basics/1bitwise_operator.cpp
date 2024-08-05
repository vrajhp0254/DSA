// Bitwise Operators 
#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 5;
    cout << "a&b=" << (a & b) << endl;
    cout << "a|b=" << (a | b )<< endl;
    cout << "*b=" << ~b << endl;
    cout << "a^b=" << (a ^ b) << endl;

    b=a<<2;
    a=25>>3;
    cout<<b<<endl<<a;
    return 0;
}
