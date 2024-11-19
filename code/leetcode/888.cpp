#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool present(int x, vector<int>& v)
{
    int indx = lower_bound(v.begin(), v.end(), x) - v.begin();
    if (v[indx] == x)
        return true;
    else
        return false;
}
int main()
{
     vector<int>aliceSizes;
     vector<int>bobSizes;
     int a,b;
     cin>>a>>b;
     for(int i=0;i<a;i++){
        int x;
        cin>>x;
        aliceSizes.push_back(x);
     }
     for(int i=0;i<b;i++){
        int x;
        cin>>x;
        bobSizes.push_back(x);
     }


        vector<int> result;
        ll alis = 0, bob = 0;
        for (int x : aliceSizes) {
            alis += x;
        }
        for (int x : bobSizes) {
            bob += x;
        }
        ll distribution = (alis + bob) / 2;
        cout<<"alis:"<<alis<<' '<<"bob:"<<bob<<"distribution:"<<distribution<<endl;
        for (int x : bobSizes) {
            alis += x;
            bob -= x;
            int p = alis - distribution;
            if (present(p,aliceSizes) == true) {
                cout<<"P:"<<p<<' '<<"x:"<<x<<endl;
                result.push_back(p);
                result.push_back(x);
                break;
            } else {
                alis -= x;
                bob += x;
            }
        }
        for(int x:result){
            cout<<x<<' ';
        }
        cout<<endl;

    return 0;
}
