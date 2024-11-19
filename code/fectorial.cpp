#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll arr[25];
const ll mx=1e9+7;
ll fectorial(ll n)
{
    if(n==0||n==1)return 1;
    return arr[n] = (n * fectorial(n-1))%mx;
}
int main()
{
    arr[1]=1;
    fectorial(20);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        if(n==1)cout<<1<<endl;
        else
        {
           cout<<(ll(pow(n,k))%mx)<<endl;
        }

    }
    return 0;
}
