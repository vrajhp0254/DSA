// rat maze problem 
#include <iostream>
#include <vector>
using namespace std;
bool solve(vector<vector<int>> &a, string &s, int &ix, int &iy)
{
    bool f = true;
    int i = 0, c = 0, b = 0;
    cout << iy << "  " << ix << endl;
    if (ix >= a[0].size() || ix < 0 || iy >= a.size() || iy < 0)
    {
        cout << "wrong1" << endl;
        return false;
    }
    if (a[iy][ix] == 0)
    {
        cout << "wrong2" << endl;
        return false;
    }
    if (s[s.size() - 1] == 'd')
    {
        c = 1;
    }
    if (s[s.size() - 1] == 'r')
    {
        b = 1;
    }

    if (ix == (a.size() - 1) && iy == (a.size() - 1))
    {
        return true;
    }
    cout << "bottom" << endl;
    cout << s << endl;
    cout << iy << " end " << ix << " " << c << " i " << i << " " << b << endl;
    while (ix != (a[0].size() - 1) || iy != (a.size() - 1))
    {
        cout << " i " << i << endl;
        if (i == 0 && c == 0)
        {
            cout << "e=u" << endl;
            char c = 'u';
            s.push_back(c);
            iy--;
            f = solve(a, s, ix, iy);
            if (f == false)
            {
                iy++;
                s.pop_back();
            }
        }
        if (i == 1)
        {
            cout << "e=r" << endl;
            char c = 'r';
            s.push_back(c);
            ix++;
            f = solve(a, s, ix, iy);
            if (f == false)
            {
                ix--;
                s.pop_back();
            }
        }
        if (i == 2)
        {
            cout << "e=d" << endl;
            char c = 'd';
            s.push_back(c);
            iy++;
            f = solve(a, s, ix, iy);
            if (f == false)
            {
                iy--;
                s.pop_back();
            }
        }
        if (i == 3 && b == 0)
        {
            cout << "e=l" << endl;
            char c = 'l';
            s.push_back(c);
            ix--;
            f = solve(a, s, ix, iy);
            if (f == false)
            {
                ix++;
                s.pop_back();
            }
        }
        i++;
        if (i > 3)
        {
            i = 0;
        }
    }
    if (ix == (a.size() - 1) && iy == (a.size() - 1))
    {
        return true;
    }
}

int main()
{
    vector<vector<int>> a{{1,1,0,0},{0,1,0,0},{0,1,1,0},{0,0,1,1}};
    // cout << a.size();
    string s = "";

    int ix = 0;
    int iy = 0;

    bool f = solve(a, s, ix, iy);
    cout << "f=" << f << endl;
    cout << s;
    return 0;
}
