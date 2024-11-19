#include<bits/stdc++.h>
using namespace std;
#define inf INT_MAX
#define minf INT_MIN;
#define mx 20002
#define pb push_back
#define pf push_front
#define popf pop_front
#define popb pop_back
#define mem(a, v) memset(a, v, sizeof(a))
typedef long long int ll;
const int n=1e6+100;
//2d gride:first 4 move are side move and last 4 move are diagonal movement..
int dx[]= {-1,1,0,0,-1,-1,1,1};
int dy[]= {0,0,-1,1,-1,1,-1,1};
//knight move:
int kx[]= {1,1,2,2,-1,-1,-2,-2};
int ky[]= {2,-2,1,-1,2,-2,1,-1};
vector<int>graph[mx];
bool visited[mx];
int colour[mx];
set<int>ss;
void dfs(int source,int clr){
    visited[source]=true;
    colour[source]=clr;
    for(int child:graph[source]){
        if(visited[child]==false){
            dfs(child,1^(colour[source]));
        }
    }
}
int main()
{
    int t,testcase=1;
    scanf("%d",&t);
    while(t--){
//        for(int i=0;i<mx;i++){
//            graph[i].clear();
//        }
        ss.clear();
        mem(colour,-1);
        mem(visited,false);
        int fight;
        scanf("%d",&fight);
        for(int i=0;i<fight;i++){
            int u,v;
            scanf("%d%d",&u,&v);
            graph[u].pb(v);
            graph[v].pb(u);
            ss.insert(u);
            ss.insert(v);
        }
        for(auto it:ss){
            int node=it;
            if(visited[node]==false){
            dfs(node,0);
            }
        }
        int Max1=0,Max2=0;
        for(auto it:ss){
                int x=it;
                //cout<<"x:"<<x<<' '<<"colour:"<<colour[x]<<endl;
            if(colour[x]==0)Max1++;
            else if(colour[x]==1)Max2++;
            graph[x].clear();
        }
       // cout<<"Max1:"<<Max1<<' '<<"Max2:"<<Max2<<endl;
       printf("Case %d: %d\n",testcase,max(Max1,Max2));
        testcase++;
    }
    return 0;
}

