#include<bits/stdc++.h>
#define fast         ios_base::sync_with_stdio(0);cin.tie(0);
#define endl         '\n'
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
const ll Mx=1e4+100;
const int infi = 1e9;
//2d gride:first 4 move are side move and last 4 move are diagonal movement..
int dx[]= {-1,1,0,0,-1,-1,1,1};
int dy[]= {0,0,-1,1,-1,1,-1,1};
//knight move:
int kx[]= {1,1,2,2,-1,-1,-2,-2};
int ky[]= {2,-2,1,-1,2,-2,1,-1};
int arr[5];
//****bigmod****
//bigmd array -1 kra lagbe
ll bigmd[Mx];
ll bigmod(ll base,ll p)
{
    if(p==1)return bigmd[p]=base;
    if(p%2==0)
    {
        ll mid=p/2;
        if(bigmd[mid]!=-1)return bigmd[mid];
        return bigmd[mid]=((bigmod(base,mid)%mx)*(bigmod(base,mid)%mx))%mx;
    }
    else
    {
        return bigmd[p]=((bigmod(base,p-1)%mx)*(base%mx))%mx;
    }
}
//bigmod close
//*******bitmasking*****
void all_possible_subset(int n)
{
    for(int mask=0; mask<(1<<n); mask++)
    {
        for(int i=0; i<n; i++)
        {
            if((mask & (1<<i))>0)cout<<arr[i]<<' ';
        }
        cout<<endl;
    }
}
//*********
int main()
{
    return 0;
}

