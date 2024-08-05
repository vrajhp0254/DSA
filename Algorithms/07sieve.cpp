// use for prime number 
#include <iostream>
#include <vector>
using namespace std;
void sieve(int a)
{
    vector<bool> v(a, true);
    
    for (int i = 2; i*i < a; i++)
    {
        if(v[i]==true)
        {for (int j = i * i; j < a; j=j+i)
        {
            v[j] = false;
        }}
    }
    for (int i = 2; i < a; i++)
    {
        if (v[i] == true)
        {
            cout << i << endl;
        }
    }
}
int main()
{
    int a = 100;
    cout << "started" << endl;
    sieve(a);

    return 0;
}