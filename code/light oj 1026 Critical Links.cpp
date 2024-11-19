#include<bits/stdc++.h>
using namespace std;
#define inf INT_MAX
#define minf INT_MIN;
#define mx 10005
#define pb push_back
#define pf push_front
#define popf pop_front
typedef long long int ll;
#define popb pop_back
//2d gride:first 4 move are side move and last 4 move are diagonal movement..
int dx[]= {-1,1,0,0,-1,-1,1,1};
int dy[]= {0,0,-1,1,-1,1,-1,1};
//knight move:
int kx[]= {1,1,2,2,-1,-1,-2,-2};
int ky[]= {2,-2,1,-1,2,-2,1,-1};
vector<int>graph[mx];
int depth[mx];
bool visited[mx];
int low[mx];
int cnt=0;
set<pair<int,int>>result;
void bridge(int u,int parent,int d)
{
    int v;
    visited[u]=true;
    depth[u]=d;
    low[u]=d;
    for(int i=0; i<graph[u].size(); i++)
    {
        v=graph[u][i];
        if(v==parent)
            continue;
        if(visited[v]==false)
        {
            bridge(v,u,d+1);
            low[u]=min(low[v],low[u]);
            if(low[v]>depth[u])
            {
                if(v<u)
                    result.insert({v,u});
                else if(u<v)
                {
                    result.insert({u,v});
                }
            }
        }
        else
        {
            if(low[u]>depth[v])
            {
                low[u]=min(low[u],depth[v]);
            }
        }
    }
}
int main()
{
    int t;
    int node;
    cin>>t;
    int testcase=1;
    while(t--)
    {
        cin>>node;
        for(int i=0; i<node; i++)
        {
            int u;
            cin>>u;
            char a,b;
            int edge;
            cin>>a>>edge>>b;
            for(int j=0; j<edge; j++)
            {
                int v;
                cin>>v;
                if(u<v)
                {
                    graph[u].pb(v);
                    graph[v].pb(u);
                }
            }
        }
        cout<<"Case "<<testcase<<':'<<endl;
        for(int i=0; i<node; i++)
        {
            if(visited[i]==false)
                bridge(i,-1,i);
        }
//        for(int i=0;i<node;i++){
//            cout<<"low:"<<low[i]<<"->"<<"depth:"<<depth[i]<<endl;
//        }
        cout<<result.size()<<" critical links"<<endl;
        for(auto it:result)
        {
            cout<<it.first<<" - "<<it.second<<endl;
        }
        memset(depth,0,sizeof(depth));
        memset(visited,false,sizeof(visited));
        memset(low,0,sizeof(low));
        for(int i=0; i<node; i++)
            graph[i].clear();
        result.clear();
        testcase++;
    }
    return 0;
}


