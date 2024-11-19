#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    int val;
    cin>>val;
        sort(nums.begin(),nums.end());
        int indx1=lower_bound(nums.begin(),nums.end(),val)-nums.begin();
        int indx2=upper_bound(nums.begin(),nums.end(),val)-nums.begin();
        nums.erase(nums.begin()+indx1,nums.begin()+indx2);
        for(int x:nums){
            cout<<x<<' ';
        }
        cout<<endl;
return 0;
}
