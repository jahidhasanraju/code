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
    int t;
    cin>>t;
    TEST_CASE(t)
    {
        int n;
        cin>>n;
        int a[n];
        int b[n];
        int mn1=inf;
        int mn2=inf;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mn1=min(a[i],mn1);
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            mn2=min(b[i],mn2);
        }
        ll result=0;
        for(int i=0;i<n;i++){
         int x=a[i]-mn1;
         int y=b[i]-mn2;
         //cout<<"x:"<<x<<' '<<"y:"<<y<<endl;
         int q=min(x,y);
         //cout<<"q:"<<q<<endl;
         result+=q;
         //cout<<"resutl:"<<result<<endl;
         a[i]=a[i]-q;
         b[i]=b[i]-q;
         //cout<<"element a:"<<a[i]<<' '<<"element b:"<<b[i]<<endl;
         if(a[i]!=mn1)result+=(a[i]-mn1);
         if(b[i]!=mn2)result+=(b[i]-mn2);
        }
        cout<<result<<endl;
    }
    return 0;
}

