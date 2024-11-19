#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll mx=1e6;
ll arr[mx];
ll bigmod(ll n,ll base)
{
    if(n==1)return arr[n]=base;
    if(n%2==0)
    {
        ll mid=n/2;
        if(arr[mid]!=-1)return arr[mid];
        return arr[mid]=((bigmod(mid,base)%mx)*(bigmod(mid,base)%mx))%mx;
    }
    else
    {
        return arr[n]=((bigmod(n-1,base)%mx)*(base%mx))%mx;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,base;
        cin>>n>>base;
        memset(arr,-1,sizeof(arr));
        cout<<bigmod(n,base)<<endl;
    }
}
