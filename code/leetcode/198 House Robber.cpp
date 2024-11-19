#include<bits/stdc++.h>
using namespace std;
typedef long long int  ll;
 ll rob_house(ll n,vector<int>&v){
        ll sum=0;
        if(n<0)return 0;
        if(n==0)return v[n];
        cout<<"n:"<<n<<endl;
        cout<<"v[n]:"<<v[n]<<endl;
        return v[n]+rob_house(n-2,v);
    }
int main(){
    vector<int>v;
    int p;
    cin>>p;
    for(int i=0;i<p;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    ll n=v.size()-1;
    cout<<rob_house(n,v)<<endl;
return 0;
}
