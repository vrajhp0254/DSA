#include <iostream>
using namespace std;

int partition(int *a, int s, int e)
{
    int c = s;
    for (int i = s+1; i < e - s; i++)
    {
        if (a[i] < a[s])
        {
            c++;
        }
    }
    if (c != s)
    {
        a[s] = a[s] + a[c];
        a[c] = a[s] - a[c];
        a[s] = a[s] - a[c];

        int i = s, j = e - 1;
        while (i != j)
        {
            if (a[i] < a[c])
            {
                i++;
            }
            if (a[j] > a[c])
            {
                j--;
            }
            if (a[i] > a[c] && a[j] < a[c])
            {
                a[i] = a[i] + a[j];
                a[j] = a[i] - a[j];
                a[i] = a[i] - a[j];
            }
        }
    }
    cout << "in" << endl;
    for (int i = 0; i < e - s; i++)
    {
        cout << i[a] << endl;
    }
    cout << "out" << endl;
    return c;
}

void quicksort(int *a, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int p = partition(a, s, e);
    cout << "f" << s << p << e << endl;
    quicksort(a, s, p - 1);
    cout << "s" << s << p << e << endl;
    quicksort(a, p + 1, e);
    cout << "t" << s << p << e << endl;
}
int main()
{
    int a[]{5,2,4,6,1,3};
    // cout << partition(a, 0, 5) << endl;

    quicksort(a, 0, 6);
    for (auto i : a)
    {
        cout << i << endl;
    }

    return 0;
}