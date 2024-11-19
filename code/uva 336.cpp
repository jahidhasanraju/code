#include<bits/stdc++.h>
using namespace std;
#define inf INT_MAX
#define mx 35
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
set<int>s;
vector<int>graph[mx];
struct relation{
int x;
int y;
};
bool visited[mx];
int dis[mx];
vector<relation>relation2;
vector<int>node;
deque<int>duck;
void bfs(int x){
      visited[x]=1;
      dis[x]=0;
      duck.pb(x);
      while(!duck.empty()){
        int p=duck.front();
        duck.popf();
        for(int i=0;i<graph[p].size();i++){
            int next=graph[p][i];
            if(visited[next]==0){
                visited[next]=1;
                dis[next]=dis[p]+1;
                duck.pb(next);
            }
        }
      }
}
int main()
{
    int t,kase=1;
    while(cin>>t&&t!=0){
        s.clear();
        relation2.clear();
        node.clear();
        while(t--){
            int x,y;
            cin>>x>>y;
            s.insert(x);
            s.insert(y);
            relation2.pb({x,y});
        }
        for(auto it=s.begin();it!=s.end();it++){
            node.pb(*it);
        }
        int X,Y;
        for(int i=0;i<relation2.size();i++){
            int p=relation2[i].x;
            int q=relation2[i].y;
            for(int j=0;j<node.size();j++){
                if(p==node[j]){
                  X=j;
                }
                if(q==node[j]){
                    Y=j;
                }
            }
            graph[X].pb(Y);
            graph[Y].pb(X);
        }
        int quary1,quary2,result;
        //for(int i=0;i<node.size();i++)cout<<node[i]<<endl;
        while(cin>>quary1>>quary2&&(quary1!=0||quary2!=0)){
                memset(visited,0,sizeof(visited));
                memset(dis,0,sizeof(dis));
                int check=0;
            for(int i=0;i<node.size();i++){
                if(node[i]==quary1){
                    result=i;
                    bfs(i);
                    check=1;
                }
            }
            int cnt=0;
            for(int i=0;i<node.size();i++){
                if(dis[i]<=quary2&&visited[i]!=0)cnt++;
            }
            if(check){
            cout<<"Case "<<kase<<": "<<node.size()-cnt<<" nodes not reachable from node "<<node[result]<<" with TTL = "<<quary2<<"."<<endl;}
            else{
                cout<<"Case "<<kase<<": "<<node.size()<<" nodes not reachable from node "<<quary1<<" with TTL = "<<quary2<<"."<<endl;
            }
            kase++;
        }
        for(int i=0;i<node.size();i++){
            graph[i].clear();
        }

    }

    return 0;
}
