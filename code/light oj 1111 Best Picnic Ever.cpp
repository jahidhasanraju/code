#include<bits/stdc++.h>
using namespace std;
#define inf              INT_MAX
#define minf             INT_MIN;
#define mx               10005
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
vector<int>quary;
vector<int>graph[mx];
bool visited[mx];
void dfs(int node){
    visited[node]=true;
    loop(i,graph[node].size()){
        int next=graph[node][i];
        if(visited[next]==false)dfs(next);
    }
}
int main()
{
    int t;
    int k,n,m;
    cin>>t;
    TEST_CASE(t){
        cin>>k>>n>>m;
        loop(i,k){
            int x;
            cin>>x;
            quary.pb(x);
        }
        loop(i,m){
           int u,v;
           cin>>u>>v;
           graph[u].pb(v);
        }
        int mini=inf;
        loop(i,quary.size()){
            int cnt=0;
            mem(visited,0);
            dfs(quary[i]);
            loop1(j,n){
                if(visited[j]==true)cnt++;
            }
            mini=min(mini,cnt);
        }
       CASE_PRINT;
       cout<<mini<<endl;
       quary.clear();
       loop1(i,n)graph[i].clear();
    }

    return 0;
}
