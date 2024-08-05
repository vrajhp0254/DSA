#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void fullJustify(vector<string> &words, int maxWidth)
    {

        for (int i = 0; i < words.size(); i++)
        {
            if (words[i].size() + 1 >= maxWidth)
            {
                continue;
            }

            int len = words[i].size();
            int n = i;
            while (len < maxWidth)
            {
                len += words[n].size() + 1;
                n + 1;
            }
            n = n - i;
            len=maxWidth-len;
            words[i].append(" ");
            words[0].append(words[1]);
            words.erase(words.begin() + 1);
        }

        for (auto &&i : words)
        {
            cout << i << endl;
        }
    }
};
int main()
{
    Solution s;
    vector<string> a = {"This", "is", "an", "example", "of", "text", "justification."};
    s.fullJustify(a, 16);
    return 0;
}