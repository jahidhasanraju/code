
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        int one=0;
        int zero=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='1')
            {
                one++;
            }
        }
        if(one==0)cout<<1LL*n*m<<endl;
        else if((one*m)%2!=0)cout<<0<<endl;
        else
        {
            int result=0;
            int k=0;
            if(m%2==0)
            {
                s+=s;
                one=one*2;
            }
            for(int i=0; i<s.size(); i++)
            {
                k+=(s[i]-'0');
                if(k==(one/2))result++;
                if(k>(one/2))break;
            }
            cout<<result<<endl;
        }
    }

    return 0;
}

