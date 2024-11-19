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
char gride[mx][mx];
bool visited[mx][mx];
int row,colum,cnt;
struct axis
{
    int x;
    int y;
};
vector<axis>v;
void dfs(int x,int y)
{
    if(visited[x][y]==0)
    {
        visited[x][y]=1;
        cnt++;
    }
    for(int i=0; i<4; i++)
    {
        int next_x=x+dx[i];
        int next_y=(y+dy[i])%colum;
        if(next_y<0)next_y=colum-1;
        if(next_x>=0&&next_x<row&&next_y>=0&&next_y<colum&&visited[next_x][next_y]==0)
        {
            dfs(next_x,next_y);
        }
    }
}

int main()
{
    while(cin>>row>>colum)
    {
        v.clear();
        memset(visited,0,sizeof(visited));
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<colum; j++)
            {
                cin>>gride[i][j];
            }
        }
        int x,y;
        cin>>x>>y;
        v.pb({x,y});
        char ch=gride[x][y];
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<colum; j++)
            {
                if(gride[i][j]==ch)
                {
                    v.pb({i,j});
                }
                else visited[i][j]=true;
            }
        }
        int result=0;
        for(int i=0; i<v.size(); i++)
        {
            cnt=0;
            int p=v[i].x;
            int q=v[i].y;
            if(visited[p][q]==0)
            {
                dfs(p,q);
            }
            if(i==0)cnt=0;
            if(cnt>result)result=cnt;
        }
        cout<<result<<endl;
    }
    return 0;
}

