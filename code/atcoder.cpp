#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<char>v;
    string s,t;
    cin>>s>>t;
    int i=0;
    while(i<s.size())
    {
        if(s[i]!=t[i])
        {
            v.push_back(s[i]);
        }
        i++;
    }
    if(v.size()==0||v.size()==2)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
