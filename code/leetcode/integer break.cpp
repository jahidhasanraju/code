#include<bits/stdc++.h>
using namespace std;
int result[1000];
int solve(int n)
{
    if(n==1)return result[1];
    if(result[n]!=0)return result[n];
    int res=0;
    for(int i=1;i<=n/2;i++){
        res=max(res,i*solve(n-i));
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    result[0]=0;
    result[1]=1;
    result[2]=1;
    result[3]=2;
    result[4]=4;
    cout<<solve(n)<<endl;
    }
    return 0;
}
