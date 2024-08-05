// rotate to right an  2d array 
#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int brr[3][3],a=0;
    for (int k = 2; k >= 0; k--)
    {
        
        for (int j = 0; j < 3; j++)
        {
            brr[j][k]=arr[a][j];
            
        }
        a++;
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    

    
    return 0;
}
// 1 2 3
// 4 5 6
// 7 8 9
// rotated 
// 7 4 1
// 8 5 2
// 9 6 3

// 00>02
// 01>12
// 02>22

// 10>01
// 11>11
// 12>21