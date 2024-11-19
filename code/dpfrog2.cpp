#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define inf INT_MAX
const ll mx=1e6;
ll arr[mx];
ll dp[mx];
int main(){
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>arr[i];
    dp[0]=0;
    for(int i=1;i<n;i++){
        ll x=inf;
        for(int j=1;j<=k;j++){
            if((i-j)>=0){
                x=min(x,(dp[i-j]+abs(arr[i]-arr[i-j])));
            }
            else break;
        }
        dp[i]=x;
    }
    cout<<dp[n-1]<<endl;
 return 0;
}
