#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool cmp(pair<ll,ll> &a,pair<ll,ll> &b)
{
    return (a.second<b.second);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<pair<ll,ll>>v;
        vector<ll>vc;
        map<ll,ll>mp;
        for(ll i=0; i<m; i++)
        {
            ll x,y;
            cin>>x>>y;
            v.push_back({x,y});
            mp[x]+=i;
        }
        sort(v.begin(),v.end(),cmp);
        int sum=0;
        for(ll i=0; i<(2*n); i++)
        {
            sum+=v[i].second;
            vc.push_back(v[i].first);
        }
        sort(vc.begin(),vc.end());
        cout<<sum<<endl;
        ll j=vc.size()-1;
        for(ll i=0;i<(vc.size()/2);i++){

            cout<<mp[vc[i]]+1<<' '<<mp[vc[j]]+1<<endl;
            j--;
        }
    }
    return 0;
}
