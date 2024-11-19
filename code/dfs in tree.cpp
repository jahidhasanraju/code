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
bool visited[mx];
int dis[mx];
int sub[mx];
int node,edges;
vector<int>tree[mx];
int mxd,mxd2,mxd2;
void dfs(int source){
    visited[source]=true;
    int next;
    for(int i=0;i<tree[source].size();i++){
        next=tree[source][i];
        if(visited[next]==0){
            dis[next]=dis[source]+1;
            dfs(next);
        }
    }
    sub[source]=0;
    mxd=0;
    mxd2=0;
    mxd3=0;
    for(int i=0;i<tree[source].size();i++){

    }
}
int main()
{
    cin>>node>>edges;
    for(int i=0;i<edges;i++){
        int u,v;
        cin>>u>>v;
        tree[u].pb(v);
        tree[v].pb(u);
    }
    dis[1]=0;
     dfs(1);
     cout<<"sub tree"<<endl;
     for(int i=1;i<=node;i++){
        cout<<i<<' '<<sub[i]-1<<endl;
     }
    return 0;
}
/*
9 8
1 2
1 3
2 4
2 5
3 6
3 7
7 8
7 9
*/

