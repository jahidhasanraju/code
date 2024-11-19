#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int>mp;
    int q;
    cin>>q;
    while(q--){
       int n;
       cin>>n;
       if(n==1){
        string s;
        int m;
        cin>>s>>m;
        mp[s]+=m;
       }
       else if(n==2){
        string s;
        cin>>s;
        mp[s]=0;
       }
       else{
        string s;
        cin>>s;
        cout<<mp[s]<<endl;
       }
    }
}
