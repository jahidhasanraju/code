#include<bits/stdc++.h>
using namespace std;
string s;
string str1="";
string lps(int low,int high)
{
    cout<<"**"<<low<<' '<<high<<endl;
    string palindrom="";
    for(int i=1; i<s.size(); i++)
    {
        if(high>=s.size())return str1;
        if(low>=0&&high<=s.size())
        {
            if(s[low]==s[high])
            {
                palindrom=s.substr(low,high);
                cout<<palindrom<<endl;
                if(palindrom.size()>str1.size()){
                    str1=palindrom;
                }
                low--;
                high++;
                lps(low,high);
            }
            if(s[i]==s[i+1])
            {
                palindrom=s.substr(low,high);
                if(palindrom.size()>str1.size()){
                    str1=palindrom;
                }
                high++;
                lps(low,high);
            }
        }
    }
    return str1;
}
int main()
{
    cin>>s;
    string ss=lps(0,2);
    cout<<ss<<endl;
    return 0;
}
