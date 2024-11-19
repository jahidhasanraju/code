#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>nums{2,3,1,2,4,3};
    int target;
    cin>>target;
    int i=0,j=0,sum=0,min_size=1000000;
    while(i<=j)
    {
        if(sum>=target)
        {
            int x=j-i+1;
            if(x<min_size)min_size=x;
            sum-=nums[i];
            i++;
            if(sum<target)j++;
            cout<<"****i:"<<i<<' '<<"j:"<<j<<' '<<"sum:"<<sum<<' '<<"min:"<<min_size<<endl;
            continue;
        }
        else
        {
            if(j<nums.size())
            {
                sum+=nums[j];
                cout<<"i:"<<i<<' '<<"j:"<<j<<' '<<"sum:"<<sum<<endl;
                j++;
                continue;
            }
        }
    }
    cout<<min_size<<endl;
    return 0;
}
