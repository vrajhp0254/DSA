#include <iostream>
using namespace std;
void merge(int *a, int s, int e)
{
    int m = (e + s) / 2;
    int i1 = s;
    int i2 = m + 1;
    while(i1<i2)
    {
        if (a[i1] > a[i2])
        {
            int t=a[i2];
            for (int j = i2; j > i1; j--)
            {
                a[j] = a[j - 1];
            }
            a[i1]=t;
            i2++;
        }
        i1++;
    }

    // cout << "a=" << endl;
    // for (int i = s; i <= e; i++)
    // {
    //     cout << a[i] << endl;
    // }
}
void mergesort(int a[], int s, int e)
{
    if (s >= e)
    {
        // cout<<"return"<<endl;
        return;
    }
    int m = (s + e) / 2;
    // cout<<"a"<<" s= "<<s<<" m= "<<m<<" e= "<<e<<endl;
    mergesort(a, s, m);
    // cout<<"b"<<" s= "<<s<<" m= "<<m<<" e= "<<e<<endl;
    mergesort(a, m + 1, e);
    // cout<<"c"<<" s= "<<s<<" m= "<<m<<" e= "<<e<<endl;
    merge(a, s, e);
}
int main()
{
    int arr[]{7,2,6,1,4,8,3,5};
    mergesort(arr, 0, 7);
    for (auto i : arr)
    {
        cout << i << endl;
    }

    return 0;
}