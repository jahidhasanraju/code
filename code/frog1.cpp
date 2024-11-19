#include<bits/stdc++.h>
using namespace std;
const int mx=1e5;
int h[mx];
int mn=0;
int fun(int n){
       if(n<=0)return mn;
       cout<<"before exicuted:"<<n<<endl;
     mn+=min(abs(h[n]-h[fun(n-1)]),abs(h[n]-h[fun(n-2)]));

     cout<<"after exicution:"<<n<<endl;
     return mn;
}
int main(){
     int n;
     cin>>n;
     for(int i=0;i<n;i++){
        cin>>h[i];
     }
     cout<<fun(n-1)<<endl;
return 0;
}
