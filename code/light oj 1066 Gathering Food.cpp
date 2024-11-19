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
bool visited[mx][mx];
bool visited1[mx][mx];
char graph[mx][mx];
int dis[mx][mx];
int node;
struct ss
{
    char ch;
    int x;
    int y;
};
vector<ss>v;
bool compare_function(ss a,ss b)
{
    return a.ch<b.ch;
}
queue<pair<int,int>>q;
bool check1;
int bfs(char ch1,int x,int y)
{
    int result1=0;
    ch1=ch1+1;
    visited1[x][y]=true;
    dis[x][y]=0;
    q.push({x,y});
    check1=false;
    while(!q.empty())
    {
        int xx=q.front().first;
        int yy=q.front().second;
        q.pop();
        loop(i,4)
        {
            int next_x=xx+dx[i];
            int next_y=yy+dy[i];
            if(next_x>=0&&next_x<node&&next_y>=0&&next_y<node&&graph[next_x][next_y]!='#'&&visited1[next_x][next_y]==false&&graph[next_x][next_y]<=ch1)
            {
                visited1[next_x][next_y]=true;
                dis[next_x][next_y]=dis[xx][yy]+1;
                q.push({next_x,next_y});
                if(graph[next_x][next_y]==ch1)
                {
                    result1=dis[next_x][next_y];
                    check1=true;
                    break;
                }
            }
        }
    }
    if(check1=true)
        return result1;
    else
        return 0;
}
int main()
{
    int t;
    cin>>t;
    TEST_CASE(t)
    {
        int x,y;
        cin>>node;
        char tergect='0';
        loop(i,node)
        {
            loop(j,node)
            {
                cin>>graph[i][j];
                if(graph[i][j]!='.'&&graph[i][j]!='#')
                {
                    v.pb({graph[i][j],i,j});
                    if(graph[i][j]>tergect)
                        tergect=graph[i][j];
                }
                if(graph[i][j]=='#')
                {
                    visited[i][j]=true;
                }
            }
        }
        sort(v.begin(),v.end(),compare_function);
        int d1=0;
        int check=0;
        CASE_PRINT;
        for(auto it:v)
        {
            //memcpy(visited1,visited,sizeof(visited));
            mem(visited1,0);
            mem(dis,0);
            char ch1=it.ch;
            int x=it.x;
            int y=it.y;
            if(ch1==tergect)
                continue;
            int result=bfs(ch1,x,y);
            if(result==0)
            {
                check=true;
            }
            else
                d1+=result;
        }
        if(check==true)
            cout<<"Impossible"<<endl;
        else
            cout<<d1<<endl;
        v.clear();
    }

    return 0;
}


