#include<bits/stdc++.h>
using namespace std;
#define inf              ll_MAX
#define minf             ll_MIN;
#define mx               100
#define pb               push_back
#define pf               push_front
#define popf             pop_front
#define popb             pop_back
#define mem(a, v)        memset(a, v, sizeof(a))
#define TEST_CASE(t)     for(ll z=1;z<=t;z++)
#define loop(i,n)        for(ll i=0;i<n;i++)
#define loop1(i,n)       for(ll i=1;i<=n;i++)
#define CASE_PRll       cout<<"Case "<<z<<": "
typedef long long int ll;
const ll n=1e6+100;
const ll infi = 1e9;
//2d gride:first 4 move are side move and last 4 move are diagonal movement..
ll dx[]= {-1,1,0,0,-1,-1,1,1};
ll dy[]= {0,0,-1,1,-1,1,-1,1};
//knight move:
ll kx[]= {1,1,2,2,-1,-1,-2,-2};
ll ky[]= {2,-2,1,-1,2,-2,1,-1};
deque<ll>fedorb;
deque<ll>frnd;
deque<ll>duck;
void decimalTobinary(ll x){
      while(x!=0){
        duck.pb(x%2);
        x=x/2;
      }
}
int main()
{
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll>v;
    for(ll i=0;i<m;i++){
        ll x;
        cin>>x;
        v.pb(x);
    }
    ll fedor;
    cin>>fedor;
    decimalTobinary(fedor);
    fedorb.swap(duck);
    duck.clear();
    ll result=0;
    for(ll i=0;i<v.size();i++){
      ll cnt=0;
      decimalTobinary(v[i]);
      ll Min=min(duck.size(),fedorb.size());
       for(ll i=0;i<Min;i++){
        if(fedorb[i]!=duck[i])cnt++;
       }
       if(fedorb.size()>duck.size()){
        for(int i=Min;i<fedorb.size();i++){
            if(fedorb[i]==1)cnt++;
        }
       }
       else if(duck.size()>fedorb.size()){
        for(int i=Min;i<duck.size();i++){
            if(duck[i]==1)cnt++;
        }
       }
       if(cnt<=k)result++;
       duck.clear();
    }
    cout<<result<<endl;
    return 0;
}

