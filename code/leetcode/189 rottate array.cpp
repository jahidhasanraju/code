#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>nums;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int p;
        cin>>p;
        nums.push_back(p);
    }
    int k;
    cin>>k;
    int x=nums.size();
    int y=x-k;
    int j=1;
    while(j<=y)
    {
        nums.push_back(nums[0]);
        nums.erase(nums.begin()+0);
        j++;
    }
    for(int i=0;i<n;i++)cout<<nums[i]<<' ';
    return 0;
}
