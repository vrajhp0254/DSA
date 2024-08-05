// array of pointers
// 2D array
// 2D array using pointers
// 2D array using pointers and dynamic memory allocation

#include <iostream>
using namespace std;

int main()
{
    // static 
    int a1[]={1,2,3};
    int a2[]={1,2,3,4};
    int a3[]={5,6};
    int *b[]={a1,a2,a3};
    int s[]={3,4,2};

    for (int i = 0; i < 3; i++)
    {
        int *ptr=b[i];
        for (int j = 0; j < s[i]; j++)
        {
            cout<<*(ptr+j)<<" ";
        }
        cout<<endl;
        
    }

    // dynamic 
    int a=3;
    int num=1;
    int **b1=new int *[a];
    for (int i = 0; i < a; i++)
    {
        b1[i]=new int[s[i]];
    }
    for (int j = 0; j < a; j++)
    {
        for (int k = 0; k < s[j]; k++)
        {
            b1[j][k]=num++;
        }
        
    }
    for (int j = 0; j < a; j++)
    {
        for (int k = 0; k < s[j]; k++)
        {
            cout<<b1[j][k];
        }
        cout<<endl;
        
    }
    
    
    
    return 0;
}