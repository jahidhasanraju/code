#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<int>v;
int main()
{
    ll n;
    while(cin>>n&&n!=0)
    {
        int  cnt=0;
        while(n!=0)
        {
            v.push_back(n%2);
            if(n%2==1)
                cnt++;
            n=n/2;
        }
        cout<<"The parity of ";
        for(int i=v.size()-1; i>=0; i--)
            cout<<v[i];
        cout<<" is "<<cnt<<" (mod 2)."<<endl;
        v.clear();
    }
    return 0;
}
