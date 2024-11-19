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
vector<pair<int,int>>graph[mx];
int parent[mx];
int dis[mx];

void dijkstra(int source)
{
    dis[source]=0;
    priority_queue<pair<int,int>>unmarked;
    unmarked.push({-dis[source],source});
    while(!unmarked.empty())
    {
        pair<int,int>temp=unmarked.top();
        int srce=temp.second;
       // cout<<"srce:"<<' '<<srce<<"dis:"<<temp.second<<endl;
        unmarked.pop();
        if(dis[srce]!=-temp.first)
            continue;
        for(int i=0; i<graph[srce].size(); i++)
        {
            int next=graph[srce][i].first;
            if(dis[srce]+graph[srce][i].second<dis[next])
            {
                parent[next]=srce;
                dis[next]=dis[srce]+graph[srce][i].second;
                unmarked.push({-dis[next],next});
            }
        }
    }
}
int main()
{
    int node,edges;
    cin>>node>>edges;
    loop(i,edges)
    {
        int u,v,w;
        cin>>u>>v>>w;
        graph[u].pb({v,w});
        graph[v].pb({u,w});
    }
    loop1(i,node)
    {
        dis[i]=inf;
    }
    parent[1]=0;
    dijkstra(1);
    loop1(i,node){
    cout<<i<<' '<<dis[i]<<' '<<endl;
    }
    return 0;
}
/**
6 7
1 2 3
1 4 7
2 3 6
4 3 1
3 6 2
3 5 4
5 6 1
**/

