#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll mx=1e9+7;
#define Mx 10000
ll bigmd[Mx];
ll bigmod(ll base,ll p)
{
    if(p==1)return bigmd[p]=base;
    if(p%2==0)
    {
        ll mid=p/2;
        if(bigmd[mid]!=-1)return bigmd[mid];
        return bigmd[mid]=((bigmod(base,mid)%mx)*(bigmod(base,mid)%mx))%mx;
    }
    else
    {
        return bigmd[p]=((bigmod(base,p-1)%mx)*(base%mx))%mx;
    }
}
int main()
{
    memset(bigmd,-1,sizeof(bigmd));
    ll base,p;
    cin>>base>>p;
    cout<<bigmod(base,p)<<endl;

    return 0;
}
