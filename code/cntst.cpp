#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        map<int,int>mp;
        for(ll i=1;i<=n;i++){
            ll x;
            cin>>x;
            mp[(x-i)]++;
        }
        ll cnt=0;
        for(auto it:mp){
           ll x=it.second;
           cnt+=(x*(x-1))/2;
        }
        cout<<cnt<<endl;
    }
return 0;
}
