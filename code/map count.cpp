#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mp;
    mp[1]++;
    mp[1]++;
    mp[1]++;
    for(auto x:mp)cout<<x.first<<':'<<x.second<<endl;
    cout<<mp[1]<<endl;
    return 0;
}
