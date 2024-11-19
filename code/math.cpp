#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll cnt=0;
        for(ll i=1;i<=n;i++){
            ll x;
            cin>>x;
            if(i==x)cnt++;
        }
        cout<<(cnt*(cnt-1))/2<<endl;
    }
return 0;
}
