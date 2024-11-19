#include<bits/stdc++.h>
using namespace std;
#define inf INT_MAX
#define minf INT_MIN;
#define mx 21
#define pb push_back
#define pf push_front
#define popf pop_front
#define popb pop_back
//2d gride:first 4 move are side move and last 4 move are diagonal movement..
int dx[]= {-1,1,0,0,-1,-1,1,1};
int dy[]= {0,0,-1,1,-1,1,-1,1};
//knight move:
int kx[]= {1,1,2,2,-1,-1,-2,-2};
int ky[]= {2,-2,1,-1,2,-2,1,-1};
vector<int>v;
int main()
{
    int t;
    cin>>t;
    int testcase=1;
    while(t--){
            int n,quarry;
            cin>>n>>quarry;
            for(int i=0;i<n;i++){
                int x;cin>>x;
                v.pb(x);
            }
            cout<<"Case "<<testcase<<":"<<endl;
           for(int i=0;i<quarry;i++){
            int x,y;
            cin>>x>>y;
            auto it=lower_bound(v.begin(),v.end(),x);
            auto it2=upper_bound(v.begin(),v.end(),y);
            cout<<(distance(v.begin(),it2))-(distance(v.begin(),it))<<endl;
           }
           v.clear();
        testcase++;
    }
    return 0;
}
