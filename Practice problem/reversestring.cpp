#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
 stack<string> t;
    string reverseWords(string s) {
        string temp="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                
                if(temp=="")
                {
                    continue;
                }
                t.push(temp);
                
                temp="";
            }
            else
            {
                temp+=s[i];
                
            }
        }
        if (s[(s.length())-1] != ' ')
        {
        t.push(temp);
        }
        string ans="";
        while(!t.empty())
        {
            ans+=t.top();
            t.pop();
            if(!t.empty())
            {
                ans+=" ";
            }
        }
        return ans;

        
    }
};
int main()
{
    
    Solution s;
    string a=s.reverseWords(" ");
    cout<<a;
    return 0;
}