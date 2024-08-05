// phone keypad problem
#include <iostream>
#include <vector>
#include <string>
using namespace std;
void phone(string str[], string number, int index, vector<string> &ans, string output)
{
    if (index >= number.length())
    {
        ans.push_back(output);
        return;
    }
    int value = number[index] - '0';
    string g = str[value];
    for (int i = 0; i < g.length(); i++)
    {
        output.push_back(g[i]);
        // cout << " output " << output << " index " << index << endl;
        phone(str, number, index + 1, ans, output);
        // cout << "a output " << output << " index" << index << endl;
        output.pop_back(); // when we return then we remove last element
    }
}
int main()
{
    string str[]{"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> ans;
    string output = "";
    int index = 0;
    string number = "23";
    phone(str, number, index, ans, output);

    for (auto &&i : ans)
    {
        cout << i << endl;
    }

    return 0;
}