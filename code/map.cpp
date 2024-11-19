#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    map<char,int>mp1,mp2;
    for(int i=0;i<s1.size();i++){
        mp1[s1[i]]++;
    }
    for(int i=0;i<s2.size();i++){
        mp2[s2[i]]++;
    }
    for(auto it=mp1.begin();it!=mp1.end();it++){
        cout<<it->first<<' '<<it->second<<endl;
    }
return 0;
}
