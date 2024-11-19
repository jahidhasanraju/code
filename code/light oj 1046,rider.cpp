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
struct node
{
    int srce;
    int x;
    int y;

};
char graph[mx][mx];
bool visited[mx][mx];
int dis[mx][mx];
int dis1[mx][mx];
int dis2[mx][mx];
int check[mx][mx];
int row,coloum;
vector<node>vv;
queue<pair<int,int>>pp;
void bfs(int node1,int x,int y)
{
    //cout<<"node:"<<node1<<' '<<"x:"<<x<<' '<<"y:"<<y<<endl;
    check[x][y]+=1;
    visited[x][y]=true;
    dis[x][y]=0;
    pp.push({x,y});
    while(!pp.empty())
    {
        int xx=pp.front().first;
        int yy=pp.front().second;
        pp.pop();
        loop(i,8)
        {
            int next_x=xx+kx[i];
            int next_y=yy+ky[i];
            if(next_x>=0&&next_x<row&&next_y>=0&&next_y<coloum&&visited[next_x][next_y]==false)
            {
                dis[next_x][next_y]=dis[xx][yy]+1;
                visited[next_x][next_y]=true;
                check[next_x][next_y]+=1;
               if(dis[next_x][next_y]%node1!=0){
                dis2[next_x][next_y]=(dis[next_x][next_y]/node1)+1;
               }
               else{
                dis2[next_x][next_y]=dis[next_x][next_y]/node1;
               }
                pp.push({next_x,next_y});
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    TEST_CASE(t)
    {
        vv.clear();
        mem(dis1,0);
        mem(check,0);
        bool check2=false;
        cin>>row>>coloum;
        loop(i,row)
        {
            loop(j,coloum)
            {
                cin>>graph[i][j];
                if(graph[i][j]!='.')
                {
                    int n=graph[i][j]-'0';
                    vv.pb({n,i,j});
                }
            }
        }
        CASE_PRINT;
        int Size=vv.size();
        for(auto v:vv)
        {
            mem(dis,0);
            mem(visited,0);
            mem(dis2,0);
            //cout<<"node:"<<v.srce<<' '<<"x:"<<v.x<<' '<<"y:"<<v.y<<endl;
            bfs(v.srce,v.x,v.y);
            loop(i,row)
            {
                loop(j,coloum)
                {
                    dis1[i][j]+=dis2[i][j];
                }
            }
//            cout<<"check:"<<endl;
//            loop(i,row){
//            loop(j,coloum){
//            cout<<check[i][j]<<' ';
//            }
//            cout<<endl;
//            }
//            cout<<"dis:"<<endl;
//            loop(i,row){
//            loop(j,coloum){
//            cout<<dis2[i][j]<<' ';
//            }
//            cout<<endl;
//            }
        }
        int mini=inf;
        loop(i,row){
        loop(j,coloum)
        {
            if(Size!=1 && check[i][j]==Size && dis1[i][j]!=0){
                mini=min(mini,dis1[i][j]);
                check2=true;
            }
        }
        }
        if(Size==1)cout<<'0'<<endl;
        else if(check2==false)cout<<"-1"<<endl;
        else cout<<mini<<endl;
        vv.clear();
    }
    return 0;
}

