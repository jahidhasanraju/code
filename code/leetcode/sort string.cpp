#include<bits/stdc++.h>
using namespace std;
bool cmp(char a,char b){
    return a>b;
}
int main(){
    string s;
    cin>>s;
    //cout<<sort_string(s);
    sort(s.begin(),s.end(),cmp);
    cout<<s<<endl;
return 0;
}
