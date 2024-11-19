#include<bits/stdc++.h>
using namespace std;
#define inf INT_MAX
#define minf INT_MIN;
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
int dis_f[mx];
void dfs(int node,int parent,int dis){
    dis_f[node]=dis;
    for(auto c:graph[node]){
        int child=c.first;
        int weight=c.second;
        if(child!=parent){
            dfs(child,node,dis+weight);
        }
    }
}
int main()
{
    int t,testcase=1;
    cin>>t;
    while(t--){
            int node;
    cin>>node;
    for(int i=0;i<node-1;i++){
        int u,v,w;
        cin>>u>>v>>w;
        graph[u].pb({v,w});
        graph[v].pb({u,w});
    }
    dfs(0,-1,0);
    int node2,mx2=0;
    for(int i=0;i<node;i++){
        if(dis_f[i]>mx2){
            mx2=dis_f[i];
            node2=i;
        }
    }
    dfs(node2,-1,0);
    int terget1[mx];
    copy(dis_f,dis_f+node,terget1);
     mx2=0;
     for(int i=0;i<node;i++){
        if(dis_f[i]>mx2){
            mx2=dis_f[i];
            node2=i;
        }
     }
     dfs(node2,-1,0);
     for(int i=0;i<node;i++){
        if(dis_f[i]>terget1[i])terget1[i]=dis_f[i];
     }
     cout<<"Case "<<testcase<<':'<<endl;
     for(int i=0;i<node;i++){
        cout<<terget1[i]<<endl;
     }
     for(int i=0;i<node;i++)graph[i].clear();
        testcase++;
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


