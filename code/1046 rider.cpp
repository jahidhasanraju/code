#include<bits/stdc++.h>
using namespace std;
#define inf INT_MAX
#define mx 10000
#define pb push_back
#define pf push_front
#define popf pop_front
#define popb pop_back
//2d gride:first 4 move are side move and last 4 move are diagonal movement..
int dx[]={-1,1,0,0,-1,-1,1,1};
int dy[]={0,0,-1,1,-1,1,-1,1};
//knight move:
int kx[]={1,1,2,2,-1,-1,-2,-2};
int ky[]={2,-2,1,-1,2,-2,1,-1};
int row,colum;
char graph[15][15];
bool visited[15][15];
float dis[15][15];
float result[15][15];
struct node{
int x;
int y;
};
vector<pair<int,int>>sources;
void bfs(int x,int y,int p){
    visited[x][y]=true;
    dis[x][y]=0;
    deque<node>duck;
    duck.pb({x,y});
    while(!duck.empty()){
        int sc_x=duck.front().x;
        int sc_y=duck.front().y;
        duck.popf();
        for(int i=0;i<8;i++){
            int next_x=sc_x+kx[i];
            int next_y=sc_y+ky[i];
            if(next_x>=0&&next_x<row&&next_y>=0&&next_y<colum&&visited[next_x][next_y]==0){
                visited[next_x][next_y]=true;
                dis[next_x][next_y]=ceil((dis[sc_x][sc_y]+1)/p);
                duck.pb({next_x,next_y});
            }
        }
    }
}
int main(){
      int t;
      cin>>t;
      while(t--){
            memset(result,0,sizeof(result));
        cin>>row>>colum;
        for(int i=0;i<row;i++){
            for(int j=0;j<colum;j++){
                char ch;cin>>ch;
                if(ch!='.'){
                    sources.pb({i,j});
                }
                graph[i][j]=ch;
            }
        }
       for(int i=0;i<sources.size();i++){
       memset(visited,0,sizeof(visited));
       memset(dis,inf,sizeof(dis));
        int x=sources[i].first;
        int y=sources[i].second;
        int p=graph[x][y]-'0';
        bfs(x,y,p);
        for(int r=0;r<row;r++){
        for(int f=0;f<colum;f++){
            result[r][f]+=dis[r][f];
        }
       }
       }
       int minvalue=inf;
       for(int i=0;i<row;i++){
        for(int j=0;j<colum;j++){
            if(result[i][j]<minvalue)minvalue=result[i][j];
        }
       }
       if(minvalue==inf)cout<<"-1"<<endl;
       else
        cout<<minvalue<<endl;
      }
    return 0;
}

