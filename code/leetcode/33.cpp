#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int nums[n];
    for(int i=0; i<n; i++)
    {
        cin>>nums[i];
    }
    int target;
    cin>>target;
    typedef long long int ll;
    ll lo=0;
    ll hi=n-1;
    while(lo+1 < hi)
    {
        ll mid=(lo+hi)/2;
        if(nums[mid]==target)
        {
            cout<<"*"<<mid<<endl;
            break;
        }
        else if(target>=nums[lo] && target<=nums[mid])
        {
            hi=mid-1;
        }
        else
        {
            lo=mid+1;
        }
    }
    if(nums[lo]==target)
        cout<<lo<<endl;
    else if(nums[lo+1]==target)
        cout<<lo+1<<endl;
    else
        cout<<-1<<endl;
    return 0;
}
