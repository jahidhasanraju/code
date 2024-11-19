#include<bits/stdc++.h>
using namespace std;
#define inf INT_MAX
#define mx 15
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
bool visited[mx][mx];
int dis[mx][mx];
int a,b;
struct node{
int x;
int y;
};
deque<node>duck;
void bfs(int x,int y){
    duck.pb({x,y});
    visited[x][y]=true;
    dis[x][y]=0;
    while(!duck.empty()){
        int sc_x=duck.front().x;
        int sc_y=duck.front().y;
        duck.popf();
        for(int i=0;i<8;i++){
            int next_x=sc_x+kx[i];
            int next_y=sc_y+ky[i];
            if(next_x>=0&&next_x<8&&next_y>=0&&next_y<8&&visited[next_x][next_y]==0){
                duck.pb({next_x,next_y});
                visited[next_x][next_y]=true;
                dis[next_x][next_y]=dis[sc_x][sc_y]+1;
            }
        }

    }
}
int main()
{
    char arr[26];
    for(int i=0;i<10;i++){
        arr[i]='a'+i;
    }
    int t;
    cin>>t;
    while(t--){
     duck.clear();
     char ch,ch2;
     cin>>ch>>a>>ch2>>b;
     int x,y,x1,y1;
     y=a;
     y1=b;
     for(int i=0;i<10;i++){
        if(ch==arr[i]){
           x=i;
        }
        if(ch2==arr[i]){
            x1=i;
        }
     }
     memset(visited,0,sizeof(visited));
     memset(dis,0,sizeof(dis));
     bfs(x,y-1);
     cout<<dis[x1][y1-1]<<endl;
    }
    return 0;
}
