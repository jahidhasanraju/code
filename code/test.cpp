#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        map<string,ll>mp;
        set<string>s1;
        set<string>s2;
        set<string>s3;
        int n;
        cin>>n;
        ll a=n*3,b=n*3,c=n*3;
        for(int i=0;i<3;i++){
            for(int j=0;j<n;j++){
                string str;
                cin>>str;
                if(i==0)s1.insert(str);
                if(i==1)s2.insert(str);
                if(i==2)s3.insert(str);
                mp[str]++;
            }
        }
        for(auto x:s1)
        {
            if(mp[x]==2)a=a-2;
            else if(mp[x]==3)a=a-3;
        }
        for(auto y:s2)
        {
            if(mp[y]==2)b=b-2;
            else if(mp[y]==3)b=b-3;
        }
        for(auto z:s3)
        {
            if(mp[z]==2)c=c-2;
            else if(mp[z]==3)c=c-3;
        }
        cout<<a<<' '<<b<<' '<<c<<endl;
    }
    return 0;
}
