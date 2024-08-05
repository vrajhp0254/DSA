// give the power of number of number having constraits: 
// 1<a,b,m<10^9
#include <iostream>
using namespace std;
int exp(int a,int b, int m=1LL*1e9){
    cout<<m<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    int res=1;
    while (b>0)
    {

        if (b&1)
        {
            res=(1LL *res * (a)%m)%m;
        }
        a=(1LL * (a)%m *(a)%m)%m;
        b=b>>1;
        cout<<a<<endl;
    }
    return res;
}
int main()
{
    cout<<exp(12,21);
    return 0;
}