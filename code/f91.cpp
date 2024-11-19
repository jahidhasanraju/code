#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll>v;
bool recurse(ll n,ll m)
{
    if(n==m)
    {
        v.push_back(n);
        return true;
    }
    if(n>m)return false;
    bool check=recurse(n*2,m);
    if(check==true)
    {
        v.push_back(n);
        return true;
    }
    bool check1=recurse((n*10)+1,m);
    if(check1==true)v.push_back(n);
    return check1;
}
int main()
{
    ll n,m;
    cin>>n>>m;
    bool check=recurse(n,m);
    if(check==true)
    {
        cout<<"YES"<<endl;
        cout<<v.size()<<endl;
        reverse(v.begin(),v.end());
        for(int x:v)cout<<x<<' ';
        cout<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}
