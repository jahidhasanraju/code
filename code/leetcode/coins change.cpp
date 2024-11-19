#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const long long int SIZE = 1e8;
ll dp[SIZE+1];
ll solve(vector<ll>& coins, ll amount)
{
    if (amount == 0)
        return 0;
    if(dp[amount]!=-1)return dp[amount];
    ll ans = INT_MAX;
    ll res;
    for (int i = 0; i < coins.size(); i++)
    {
        if (amount - coins[i] >= 0)
        {
            if(solve(coins,amount-coins[i])==-1)continue;
            res=1+ll(solve(coins,amount-coins[i]));
            ans= min(ans, res);
            dp[amount]=ans;
        }
    }
    return dp[amount];
}
int main()
{
    vector<ll>coins{1,3,6,10,15};
    memset(dp, -1, sizeof(dp));
    solve(coins,SIZE);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        cout<<"***"<<dp[n]<<endl;
    }
    return 0;
}
