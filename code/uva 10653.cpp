#include<bits/stdc++.h>
using namespace std;
#define inf INT_MAX
#define mx 1001
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
bool visited[mx][mx];
int dis[mx][mx];
int row,colum;
struct node{
    int x;
    int y;
};
deque<node>duck;
void bfs(int sx,int sy){
       duck.pb({sx,sy});
       visited[sx][sy]=true;
       dis[sx][sy]=0;
       while(!duck.empty()){
        int x=duck.front().x;
        int y=duck.front().y;
        duck.popf();
        for(int i=0;i<4;i++){
                int next_x=x+dx[i];
                 int next_y=y+dy[i];
            if(next_x>=0&&next_x<row&&next_y>=0&&next_y<colum&&visited[next_x][next_y]==0){
                duck.pb({next_x,next_y});
                visited[next_x][next_y]=true;
                dis[next_x][next_y]=dis[x][y]+1;
            }
        }
       }
}
int main(){
    while(cin>>row>>colum&&(row!=0&&colum!=0))
    {
        memset(visited,0,sizeof(visited));
        memset(dis,0,sizeof(dis));
        int numof_row;
        cin>>numof_row;
        for(int i=0;i<numof_row;i++){
            int row_num,bomb_num;
            cin>>row_num>>bomb_num;
            for(int j=0;j<bomb_num;j++){
                    int x;cin>>x;
                visited[row_num][x]=true;
            }
        }
       int source1,source2;
       cin>>source1>>source2;
       bfs(source1,source2);
       int d1,d2;
       cin>>d1>>d2;
       cout<<dis[d1][d2]<<endl;
    }
    return 0;
}

