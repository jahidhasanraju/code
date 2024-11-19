#include<bits/stdc++.h>
using namespace std;
#define mx 10000
#define pb push_back
#define pf push_front
#define popb pop_back
#define popf pop_front
//2d gride:first 4 move are side move and last 4 move are diagonal movement..
int dx[]={-1,1,0,0,-1,-1,1,1};
int dy[]={0,0,-1,1,-1,1,-1,1};
//knight move:
int kx[]={1,1,2,2,-1,-1,-2,-2};
int ky[]={2,-2,1,-1,2,-2,1,-1};
vector<int>graph[mx];
deque<int>duck;
bool visited[mx];
int weight[mx];
void bfs(int source){
    duck.clear();
    visited[source]=true;
    weight[source]=0;
    duck.pb(source);
    while(!duck.empty()){
        int next=duck.front();
        duck.popf();
        for(int i=0;i<graph[next].size();i++){
           if(visited[graph[next][i]]==false){
            duck.pb(graph[next][i]);
            visited[graph[next][i]]=true;
            weight[graph[next][i]]=weight[next]+1;
           }
        }
    }
}
int main(){
    int nodes,edges;
    cin>>nodes>>edges;
    for(int i=0;i<edges;i++){
        int n,x;
        cin>>n>>x;
        graph[n].pb(x);
        graph[x].pb(n);
    }
    bfs(1);
    for(int i=1;i<=nodes;i++){
        cout<<i<<"->"<<weight[i]<<endl;
    }
}
/*
7 9
1 2
1 3
1 7
2 3
3 7
2 4
4 5
3 6
5 6
*/

