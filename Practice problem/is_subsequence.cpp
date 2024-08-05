#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        if (s.length()==0 && t.length()==0)
        {
            return true;
        }
        int a = 0, b = 0;
        while (!(b == t.length()))
        {
            cout << "h";
            if (s[a] == t[b])
            {
                a++;
                b++;
            }
            else
            {
                b++;
            }
            if (a == s.length())
            {
                return true;
            }
        }
        return false;
    }
};
int main()
{
    Solution s;
    bool a = s.isSubsequence("axe", "xea");
    cout << a;
    return 0;
}