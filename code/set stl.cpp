#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>st;
    st.insert(2);
    st.insert(3);
    st.insert(4);
    st.insert(5);
    auto it=st.find(4);
    st.erase(it);
    for(auto x:st){
        cout<<x<<' ';
    }
    cout<<endl;
return 0;
}
