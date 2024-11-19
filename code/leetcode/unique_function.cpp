#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"****"<<endl;
    auto new_end=unique(v.begin(),v.end());
    cout<<"((((("<<endl;
    for(int x:v)
    {
        cout<<x<<' ';
    }
    cout<<"kfsklj"<<endl;
    return 0;
}
