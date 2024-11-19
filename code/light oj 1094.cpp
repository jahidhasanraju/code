#include<bits/stdc++.h>
using namespace std;
#define inf INT_MAX
#define minf INT_MIN;
#define mx 30005
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
vector<pair<int,int>>graph[mx];
int distance2[mx];
void dfs(int source,int parent,int dis)
{
    distance2[source]=dis;
    for(auto c:graph[source])
    {
        int child=c.first;
        int weight=c.second;
        if(child!=parent)
        {
            dfs(child,source,dis+weight);
        }
    }
}
int main()
{
    int testcase;
    cin>>testcase;
    for(int j=0; j<testcase; j++)
    {
        int node;
        cin>>node;
        for(int i=0; i<node-1; i++)
        {
            int u,v,w;
            cin>>u>>v>>w;
            graph[u].pb({v,w});
            graph[v].pb({u,w});
        }
        memset(distance2,0,sizeof(distance2));
        dfs(0,-1,0);
        int temp=0,node2;
        for(int k=0; k<node; k++)
        {
            if(distance2[k]>temp)
            {
                temp=distance2[k];
                node2=k;
            }
        }
        memset(distance2,0,sizeof(distance2));
        dfs(node2,-1,0);
        temp=0;
        for(int i=0;i<node;i++){
           if(distance2[i]>temp)temp=distance2[i];
        }
        cout<<"Case "<<j+1<<": "<<temp<<endl;
        for(int i=0;i<node;i++){
            graph[i].clear();
        }
    }
    return 0;
}
/*
1 10
0 1 9
0 2 10
0 3 7
1 9 20
2 4 90
2 5 100
3 6 15
4 7 5
5 8 10
*/
