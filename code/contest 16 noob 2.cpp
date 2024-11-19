#include<bits/stdc++.h>
using namespace std;
#define inf INT_MAX
#define mx 21
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
vector<int>d;
bool visited[mx];
int Mx;
int Mx2;
void dfs2(int source){
    visited[source]=true;
    for(int i=0;i<graph[source].size();i++){
        int next=graph[source][i].first;
        if(visited[next]==false){
            Mx=Mx+graph[source][i].second;
        }
    }
    if(Mx>Mx2)Mx2=Mx;
}
void dfs(int source){
    visited[source]=true;
    for(int i=0;i<graph[source].size();i++){
        int next=graph[source][i].first;
        if(visited[next]==false)dfs(next);
    }
    d.pb(source);
}
int main()
{
    int testcase;
    cin>>testcase;
    while(testcase--){
        int node;
        cin>>node;
        node=node-1;
        while(node--){
            int u,v,w;
            cin>>u>>v>>w;
            graph[u].pb({v,w});
            graph[v].pb({u,w});
        }
        dfs(0);
        int mx3=0;
        for(auto x:d){
            Mx=0;Mx2=0;
            memset(visited,0,sizeof(visited));
            dfs2(x);
        if(Mx2>mx3)mx3=Mx2;
        }
        for(auto x:d)cout<<x<<' '<<endl;
        cout<<mx3<<endl;
        for(int i=0;i<node-1;i++)graph[i].clear();
        d.clear();
    }
    return 0;
}
/*
1
6
0 2 20
2 1 90
0 3 29
0 4 50
2 5 70
*/

