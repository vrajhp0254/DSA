// all possible outcomes of a string
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
void solve(vector<string>& a, string s,string& s1,int index){
    if (index>=s.length())
    {
        a.push_back(s1);
        return;
    }
    int n=s1.length()+1;
    for (int i = 0; i < n; i++)
    {
        s1.insert(i,s,index,1);
        solve(a,s,s1,index+1);
        // cout<<s1<<endl;
        s1.erase(i,1);
        // cout<<"after"<<s1<<endl;
    }
    
}
int main()
{
    vector<string> a;
    string s="abcd";
    string s1="";
    
    solve(a,s,s1,0);
    cout<<"finish"<<endl;
    for (auto &&i : a)
    {
        cout<<i<<endl;
    }
    
    sort(a.begin(),a.end());
    cout<<"after sorting"<<endl;
    for (auto &&i : a)
    {
        cout<<i<<endl;
    }
    return 0;
}