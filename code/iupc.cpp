#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
map<string,ll>mx;
map<string,ll>mn;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,sum=0;
        cin>>n;
        set<string>vs;
        set<string>::iterator it;
        while(n--)
        {
            ll a;
            string s;
            cin>>s>>a;
            vs.insert(s);
            if(!a)mx[s]++;
            else
                mn[s]++;
        }
        for(it=vs.begin();it!=vs.end();it++)
        {
            cout<<*it<<endl;
            if(mx[*it]>=mn[*it])sum+=mx[*it];
            else
                sum+=mn[*it];
        }
        cout<<sum<<endl;
        mx.clear();
        mn.clear();
        vs.clear();
    }
    return 0;
}
