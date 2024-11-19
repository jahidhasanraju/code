#include<bits/stdc++.h>
using namespace std;
int num_of_presence(int x,vector<int>&nums){
        cout<<x<<endl;
        int indx1=upper_bound(nums.begin(),nums.end(),x)-nums.begin();
        int indx2=lower_bound(nums.begin(),nums.end(),x)-nums.begin();
        cout<<"indx1:"<<indx1<<' '<<"indx2:"<<indx2<<endl;
        return indx1-indx2;
}
int main()
{
        vector<int>nums1,nums2;
        int n1,n2;
        cin>>n1>>n2;
        for(int i=0;i<n1;i++){
            int x;
            cin>>x;
            nums1.push_back(x);
        }
        for(int i=0;i<n2;i++){
            int x;
            cin>>x;
            nums2.push_back(x);
        }
        vector<int>result;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        set<int>st(nums1.begin(),nums1.end());
        for(auto it=st.begin();it!=st.end();it++){
            int z=*it;
            cout<<"first cll"<<endl;
            int x=num_of_presence(z,nums1);
            cout<<"second cll"<<endl;
            int y=num_of_presence(z,nums2);
            int p=min(x,y);
            for(int i=0;i<p;i++){
                result.push_back(z);
            }
        }
        for(int a:result){
            cout<<a<<' ';
        }
        cout<<endl;
    return 0;
}
