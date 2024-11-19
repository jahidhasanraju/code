#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const long long LIMIT = 1e18;
ll numOfTrailingZero(ll n){
              ll trail=0;
              while(n!=0){
                trail+=n/5;
                n=n/5;
              }
        return trail;
}
int main(){
    int t;
    cin>>t;
    int test=1;
    while(t--){
         int x;
         cin>>x;
         ll mid;
        ll low=0,high=LIMIT;
        while(low+1<high){
            mid=(low+high)/2;
           if(numOfTrailingZero(mid)>=x){
                high=mid;
           }
           else low=mid;
        }
        if(numOfTrailingZero(high)==x)cout<<"Case "<<test<<": "<<high<<endl;
        else cout<<"Case "<<test<<": "<<"impossible"<<endl;
        test++;
    }
}
