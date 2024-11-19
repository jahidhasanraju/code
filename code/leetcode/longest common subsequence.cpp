#include<bits/stdc++.h>
using namespace std;
int dp[1002][1002];
int lcs(string s1,string s2,int n,int m)
{
    cout<<"first string:"<<s1[n]<<' '<<"second string:"<<s2[m]<<endl;
    if(m<0||n<0)return 0;
    if(dp[n][m]!=-1)return dp[n][m];
    if(s1[n]==s2[m])
        return dp[n][m]=1+lcs(s1,s2,n-1,m-1);
    else
        return dp[n][m]=max(lcs(s1,s2,(n-1),m),lcs(s1,s2,n,(m-1)));
}
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        string s1,s2;
        cin>>s1>>s2;
        int n=s1.size()-1;
        int m=s2.size()-1;
        memset(dp,-1,sizeof(dp));
        cout<<lcs(s1,s2,n,m)<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)cout<<dp[i][j]<<' ';
            cout<<endl;
        }
        t--;
    }
    return 0;
}

