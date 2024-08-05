// convert string into zigzag like PAYPALISHIRING TO PAHNAPLSIIGYIR IF NUMROWS IS 3
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.length()) {
            return s;
        }

        int idx = 0, d = 1;
        vector<vector<char>> rows(numRows);

        for (char c : s) {
            rows[idx].push_back(c);
            if (idx == 0) {
                d = 1;
            } else if (idx == numRows - 1) {
                d = -1;
            }
            idx += d;
        }

        string result;
        for (const auto& row : rows) {
            for (char c : row) {
                result += c;
            }
        }

        return result;        
    }
};
int main()
{
    Solution s;
    string a= s.convert("PAYPALISHIRING", 3);
    cout<<a;
    return 0;
}