#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>nums;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        nums.push_back(x);
    }
    vector<int>v;
    sort(nums.begin(),nums.end());
    int arr[nums.size()+5];
    memset(arr,0,sizeof(arr));
    arr[0]=-1;
    int duplicate;
    int missing=0;
    for(int i=0; i<=nums.size(); i++)
    {
        if(i<nums.size())
            arr[nums[i]]++;
        if(arr[i]==2)duplicate=i;
        if(arr[i]==0)missing=i;
        cout<<"i:"<<i<<' '<<"ar["<<i<<"]:"<<arr[i]<<' '<<"missing:"<<missing<<' '<<"duplicate:"<<duplicate<<endl;
    }
    if(missing==0)missing=nums.size();
    v.push_back(duplicate);
    v.push_back(missing);
    for(int x:v)cout<<x<<' ';
    cout<<endl;
}
