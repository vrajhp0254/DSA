#include <iostream>
using namespace std;

int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int size=9;
    int start = 0, end = size - 1;
    int mid = (start + end) / 2;
    int a,b;
    cout<<"enter the target "<<endl;
    cin>>b;

    while (start <= end)
    {
        a=arr[(mid)/3][(mid)%3];
        cout << "mid" << mid << endl;

        if (b == a)
        {
            printf("enter number is at %d", mid);
            break;
        }

        if (a < b)
        {
            start = mid + 1;
        }
        if (a > b)
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }

    return 0;
}