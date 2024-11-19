#include<bits/stdc++.h>
using namespace std;
const int mx=1e7;
int arr[mx];
int dp[mx];
int fun(int n){
       if(n<=0)return 0;
       if(dp[n]!=-1)return dp[n];
       return dp[n]=min((fun(n-1)+abs(arr[n]-arr[n-1])),(fun(n-2)+abs(arr[n]-arr[n-2])));

}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i];
    memset(dp,-1,sizeof(dp));
    cout<<fun(n-1)<<endl;
//    dp[0]=0;
//    dp[1]=abs(arr[0]-arr[1]);
//    for(int i=2;i<n;i++){
//      dp[i]=min(dp[i-1]+abs(arr[i]-arr[i-1]),dp[i-2]+abs(arr[i]-arr[i-2]));
//    }
//    cout<<dp[n-1]<<endl;
return 0;
}

