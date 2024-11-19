#include<bits/stdc++.h>
using namespace std;
int main(){
        vector<int>nums;
        vector<int>result;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            nums.push_back(x);
        }
        int target;
        cin>>target;
       int indx=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
       int indx1=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
       cout<<indx<<' '<<indx1<<endl;
       if(indx1-indx==0){
        result.push_back(-1);
        result.push_back(-1);
       }
       else{
        result.push_back(indx);
        result.push_back(indx1-1);
       }
//       for(int x:result){
//        cout<<x<<' ';
//       }
return 0;
}
