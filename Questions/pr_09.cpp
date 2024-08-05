// find the power set of a set
#include <iostream>
#include <vector>
using namespace std;
void solve(vector<int> ar, vector<int> ab, vector<vector<int>> &a, int index, int n)
{
    cout << index << endl;
    if (index >= n)
    {
        cout << "in" << endl;
        a.push_back(ab);
        return;
    }

    solve(ar, ab,a, index + 1, n);

    int element = ar[index];
    cout << "k" << element << endl;
    ab.push_back(element);
    solve(ar, ab,a, index + 1, n);
}

int main()
{
    vector<int> ar{1, 2, 3};
    vector<int> ab;
    vector<vector<int>> a;
    solve(ar, ab, a, 0, 3);
    for (auto &&i : a)
    {
        for (auto &&j : i)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}