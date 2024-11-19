#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n,m;
    cin>>n>>m;
    map<ll,ll>mp;
    for(int i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        if(mp[x])continue;
        mp[x]=ll(i);
    }
    bool check=true;
    ll last_index=-1;
    for(int i=0; i<m; i++)
    {
        ll y;
        cin>>y;
        if(mp[y]<last_index)
        {
            check=false;
            break;
        }
        last_index=mp[y];
    }
    if(check==true)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
