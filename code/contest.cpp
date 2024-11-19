#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
         int t;
         cin>>t;
         while(t--){
            ll m,k,a1,ak;
            ll fancy_coin=0;
            cin>>m>>k>>a1>>ak;
            ll baki=m-min(m/k,ak)*k;
            if(baki<=a1){
                cout<<0<<endl;
                continue;
            }
            baki=baki-a1;
            //cout<<baki<<endl;
            if(baki%k==0)fancy_coin+=baki/k;
            else if(baki%k!=0&&a1>baki%k){
                //cout<<"baki:"<<baki<<' '<<"k:"<<k<<endl;
                   // cout<<a1<<' '<<baki%k<<endl;
                fancy_coin++;
                fancy_coin+=baki/k;
            }
            else{
                fancy_coin+=baki/k;
                fancy_coin+=baki%k;
                //cout<<"***"<<endl;
            }
            cout<<fancy_coin<<endl;

         }

return 0;
}
