#include<bits/stdc++.h>
using namespace std;
#define inf              INT_MAX
#define minf             INT_MIN;
#define mx               100000
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
set<int>st;
vector<int>v;
int main()
{
    int t;
    cin>>t;
    TEST_CASE(t)
    {
        int amp,times;
        cin>>amp>>times;
        while(times--)
        {
            loop1(i,amp)
            {
                loop(j,i)cout<<i;
                cout<<endl;
            }
            for(int i=amp-1; i>=1; i--)
            {
                for(int j=0; j<i; j++)
                    cout<<i;
                    cout<<endl;
            }
            if(times)cout<<endl;
        }
        if(z<t){
            cout<<endl;
        }
    }
    return 0;
}


