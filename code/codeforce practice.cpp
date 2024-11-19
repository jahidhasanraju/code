#include<bits/stdc++.h>
using namespace std;
#define inf              INT_MAX
#define minf             INT_MIN;
#define mx               100
#define pb               push_back
#define pf               push_front
#define popf             pop_front
#define popb             pop_back
#define mem(a, v)        memset(a, v, sizeof(a))
#define TEST_CASE(t)     for(int z=1;z<=t;z++)
#define loop(i,n)        for(int i=0;i<n;i++)
#define loop1(i,n)       for(int i=1;i<=n;i++)
#define CASE_PRINT       cout<<"Case "<<z<<": "
typedef long long int ll;
const int n=1e6+100;
const int infi = 1e9;
//2d gride:first 4 move are side move and last 4 move are diagonal movement..
int dx[]= {-1,1,0,0,-1,-1,1,1};
int dy[]= {0,0,-1,1,-1,1,-1,1};
//knight move:
int kx[]= {1,1,2,2,-1,-1,-2,-2};
int ky[]= {2,-2,1,-1,2,-2,1,-1};
int main()
{
     ll n,m;
     cin>>n>>m;
     ll initial_position=1;
     ll terget_position;
     ll moves=0;
     for(int i=0;i<m;i++){
        ll x;
        cin>>x;
        terget_position=x;
        //cout<<initial_position<<' '<<terget_position<<endl;
        if(terget_position>initial_position){
            moves+=terget_position-initial_position;
        }
        else if(terget_position<initial_position){
            moves+=((n-initial_position)+1)%n;
            initial_position=1;
            moves+=(terget_position-initial_position);
        }
        initial_position=terget_position;
     }
     cout<<moves<<endl;
    return 0;
}


