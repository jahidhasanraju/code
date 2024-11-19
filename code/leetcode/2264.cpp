#include<bits/stdc++.h>
using namespace std;
int main(){
    string num;
    cin>>num;
    set<char>st;
        for(int i=0;i<num.size();i++){
            if(num[i]==num[i+1] && num[i+1]==num[i+2]){
                st.insert(num[i]);
                i+=2;
            }
        }
        auto it=st.end();
        it--;
        char ch=(*it);
        string s;
        s+=ch;
        s+=ch;
        s+=ch;
        cout<<s<<endl;
return 0;
}
