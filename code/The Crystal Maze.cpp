#include<bits/stdc++.h>
using namespace std;
#define inf INT_MAX
#define minf INT_MIN;
#define mx 505
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
int node,colum,quary;
char graph[mx][mx];
int cnt;
int save[mx][mx];
bool visited[mx][mx];
void dfs(int x,int y){
visited[x][y]=true;
    for(int i=0;i<4;i++){
        int next_x=x+dx[i];
        int next_y=y+dy[i];
        if(next_x>=0 && next_y>=0 && next_x<node &&next_y<colum&&visited[next_x][next_y]==false &&graph[next_x][next_y]!='#'){
            if(graph[next_x][next_y]=='C')
            {
                cnt++;
            }
            dfs(next_x,next_y);
        }
    }

}
int main()
{
    int t,testcase=1;
    scanf("%d",&t);
    while(t--)
    {
        mem(save,-1);
        mem(visited,false);
        scanf("%d%d%d",&node,&colum,&quary);
        for(int i=0; i<node; i++)
        {
            for(int j=0; j<colum; j++)
            {
                cin>>graph[i][j];
            }
        }
       printf("Case %d:\n",testcase);
        while(quary--)
        {
            cnt=0;
            int x,y;
            scanf("%d%d",&x,&y);
            x--,y--;
            if(visited[x][y] && save[x][y]!=-1)printf("%d\n",save[x][y]);
            else{
                dfs(x,y);
                for(int i=0;i<node;i++){
                    for(int j=0;j<colum;j++){
                        if(visited[i][j]==true && save[i][j]==-1)save[i][j]=cnt;
                    }
                }
                printf("%d\n",save[x][y]);
            }
        }
        testcase++;
    }
    return 0;
}

