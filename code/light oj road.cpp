#include<bits/stdc++.h>
using namespace std;
#define inf              INT_MAX
#define minf             INT_MIN;
#define mx               500
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
bool visited[mx];
vector<int>graph[mx];
vector<int>vec;
int dis[mx][mx];
void dfs(int source)
{
    visited[source]=true;
    for(int v:graph[source])
    {
        if(visited[v]==false)
        {
            dfs(v);
        }
    }
    vec.pb(source);
}
int main()
{
    int t;
    cin>>t;
    TEST_CASE(t)
    {
        int node;
        cin>>node;
        loop1(i,node)
        {
            int u,v,w;
            cin>>u>>v>>w;
            graph[u].pb(v);
            dis[u][v]=w;
            graph[v].pb(u);
            dis[v][u]=-w;
        }
        dfs(1);
        int positive=0,negetive=0;
        int positive1=0,negetive1=0;
        int s=vec.size()-1;
        loop(i,s)
        {
            int x=vec[i];
            int y=vec[i+1];
            if(dis[x][y]>0)
                positive+=dis[x][y];
            else
                negetive+=dis[x][y];
        }
        int x=vec[s];
        int y=vec[0];
        if(dis[x][y]>0)
            positive+=dis[x][y];
        else
            negetive+=dis[x][y];
        if(positive<0)
            positive=-(positive);
        if(negetive<0)
            negetive=-(negetive);
        CASE_PRINT;
        cout<<min(positive,negetive)<<endl;
        vec.clear();
        mem(dis,0);
        mem(visited,false);
        for(int i=0; i<=node; i++)
        {
            graph[i].clear();
        }
    }
    return 0;
}

