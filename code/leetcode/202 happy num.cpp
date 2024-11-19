#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    set<int>st;
    st.insert(-1);
    st.insert(-2);
    st.insert(3);
    st.insert(5);
    for(auto it:st){
        cout<<it<<endl;
    }
    return 0;
}
