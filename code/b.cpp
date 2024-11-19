#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll mx=1e5+100;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll x=ll(1<<k)-1;
        bitset<32>bs(x);
        x=bs.count()*(n-1);
        x=x%mx;
        cout<<x<<endl;
        int i=1;
        ll z=x;
        while(i<x){
            n=(z*n)%mx;
            i++;
        }
        cout<<n<<endl;

    }
    return 0;
}
