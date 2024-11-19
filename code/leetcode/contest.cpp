#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll cnst=1e9+7;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<int>arr;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            arr.push_back(x);
        }
        ll mx_value=0;
        for(ll i=0; i<n; i++)
        {
            if(arr[i]>mx_value)mx_value=arr[i];
        }
        ll value=0;
        if(mx_value==0)
        {
            for(int i=0; i<n; i++)value+=arr[i];
            cout<<"value:"<<value<<endl;
            cout<<cnst+value<<endl;
            continue;
        }
        for(ll i=0; i<n; i++)
        {
            value=arr[i];
            for(ll j=i+1; j<n; j++)
            {
                value+=arr[j];
                if(value>mx_value)mx_value=value;
            }
        }
        cout<<"mx:"<<mx_value<<endl;
    }
    return 0;
}
