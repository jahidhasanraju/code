#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int arr[26];
    map<int,vector<char>>mp;
    for(int i=0;i<26;i++){
        cin>>arr[i];
        mp[arr[i]].push_back(97+i);
    }
    for(auto x:mp){
        cout<<x.first<<"->";
        for(int i=0;i<x.second.size();i++){
            cout<<x.second[i]<<' ';
        }
        cout<<endl;
    }
return 0;
}
