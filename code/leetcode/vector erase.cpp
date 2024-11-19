#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mp;
    vector<int>nums{1,1,1,2,2,2,3,3};
    for(int i=0; i<nums.size(); i++)
    {
        int x=nums[i];
        cout<<"i:"<<i<<' '<<"x:"<<x<<endl;
        mp[x]++;
        cout<<mp[x]<<endl;
        if(mp[x]>2)
        {
            cout<<i<<"###"<<mp[nums[i]]<<endl;
            nums.erase(nums.begin()+i);
            i--;
            cout<<i<<"***"<<mp[nums[i]]<<endl;
        }
    }

    return 0;
}
