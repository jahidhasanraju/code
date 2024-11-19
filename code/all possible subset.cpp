#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    for(int i=1;i<(1<<s.size());i++){
      bitset<8>bs(i);
      for(int i=0;i<n;i++){
        if(bs[i]==1)cout<<s[i]<<' ';
      }
      cout<<endl;
    }
return 0;
}
