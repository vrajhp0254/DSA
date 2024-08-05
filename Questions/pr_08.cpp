// inversion count problem : it says how far an array is sorted
#include <iostream>
using namespace std;
int count(int  *b,int a){
    int count=0;
    for (int i = 0; i < a; i++)
    {
        for (int j = i+1; j < a; j++)
        {
            if(b[j]<b[i]){
                count++;
            }
        }
        
    }
    return count;
    
}
int main()
{
    int ar[]{6,2,5,3,1,4};
    int a=sizeof(ar)/sizeof(ar[0]);
    int b=count(ar,a);
    cout<<b;
    return 0;
}