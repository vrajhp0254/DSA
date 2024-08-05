#include <iostream>
using namespace std;
int gcd(int a,int b){
    if (a==0)return a;
    if (b==0)return b;

    while (a!=b)
    {
        if(a>b)a=a-b;
        if(b>a)b=b-a;
    }
    return a;
    
    
}
int lcm(int a,int b){
    return a*b-gcd(a,b);
}
int main()
{
    cout<<gcd(24,7)<<endl;
    cout<<lcm(24,7);
    return 0;
}