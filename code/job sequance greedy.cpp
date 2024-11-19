#include<bits/stdc++.h>
using namespace std;
#define inf INT_MAX
#define mx 10000
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
struct job
{
    int profit;
    int deadline;
};
vector<job>v;
bool compair_function(job a,job b)
{
    return a.profit>b.profit;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x,y;
        cin>>x>>y;
        v.pb({x,y});
        sort(v.begin(),v.end(),compair_function);
    }
    int maxdeadline=0;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i].deadline>maxdeadline)maxdeadline=v[i].deadline;
    }
    bool visited[maxdeadline+1];
    visited[0]=true;
    int result=0;
    for(int i=0; i<v.size(); i++)
    {
        int x=v[i].deadline;
        if(visited[x]==false)
        {
            visited[x]=true;
            result+=v[i].profit;
        }
        else
        {
            for(int j=x-1; j>=0; j--)
            {
                if(visited[j]==false)
                {
                    visited[j]=true;
                    result+=v[i].profit;
                    break;
                }
            }
        }
    }
cout<<result<<endl;

    return 0;
}

