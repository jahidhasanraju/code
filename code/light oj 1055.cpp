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
typedef long long int ll;
const int n=1e6+100;
const int infi = 1e9;
//2d gride:first 4 move are side move and last 4 move are diagonal movement..
int dx[]= {-1,1,0,0,-1,-1,1,1};
int dy[]= {0,0,-1,1,-1,1,-1,1};
//knight move:
int kx[]= {1,1,2,2,-1,-1,-2,-2};
int ky[]= {2,-2,1,-1,2,-2,1,-1};
struct value{
    int d1;
    int d2;
    int d3;
};
char graph[mx][mx];
vector<pair<int,int>>srce;
vector<pair<int,int>>terget;
bool visited[mx][mx];
int dis[mx][mx];
int dis1[mx][mx];
int dis2[mx][mx];
int dis3[mx][mx];
deque<pair<int,int>>duck;
int node;
void bfs(int x,int y)
{
    visited[x][y]=true;
    dis[x][y]=0;
    duck.pb({x,y});
    while(!duck.empty())
    {
        int xx=duck.front().first;
        int yy=duck.front().second;
        duck.popf();
        loop(i,4){
            int nx=xx+dx[i];
            int ny=yy+dy[i];
            if(graph[nx][ny]=='#')visited[nx][ny]=true;
            if((nx>=0 && nx<node) && (ny>=0 && ny<node )&& visited[nx][ny]==false && graph[nx][ny]!='#'){
                visited[nx][ny]=true;
                dis[nx][ny]=dis[xx][yy]+1;
                duck.pb({nx,ny});
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
        cin>>node;
        loop(i,node)
        {
            loop(j,node)
            {
                cin>>graph[i][j];
                if(graph[i][j]=='A'||graph[i][j]=='B'||graph[i][j]=='C')
                {
                    srce.pb({i,j});
                }
                if(graph[i][j]=='X')
                    terget.pb({i,j});
            }
        }
        int k=1;
        for(auto it:srce)
        {
            mem(visited,0);
            mem(dis,0);
            int x=it.first;
            int y=it.second;
            bfs(x,y);
            if(k==1){
                memcpy(dis1,dis,sizeof(dis));
            }
            if(k==2){
                 memcpy(dis2,dis,sizeof(dis));
            }
            if(k==3){
                 memcpy(dis3,dis,sizeof(dis));
            }
            k++;
        }
        cout<<"Case "<<z<<": ";
        vector<value>des;
        int d1,d2,d3;
        for(auto v:terget){
            int x=v.first;
            int y=v.second;
            d1=dis1[x][y];
            d2=dis2[x][y];
            d3=dis3[x][y];
            des.pb({d1,d2,d3});
        }
//        for(auto v:des){
//            cout<<v.d1<<' '<<v.d2<<' '<<v.d3<<endl;
//        }
      int mini[4]={200000,200000,200000,200000};
        bool check=false;
        int i=1;
        for(auto v:des){
            //cout<<v.d1<<' '<<v.d2<<' '<<v.d3<<endl;
            if(v.d1==0&&v.d2==0&&v.d3==0){
                check=true;
                break;
            }
            else{
                  // cout<<mini[i]<<endl;
                if(v.d1>0){
                    mini[i]=min(v.d1,mini[i]);
                }
                if(v.d2>0){
                    mini[i]=min(v.d2,mini[i]);
                }
                if(v.d3>0){
                    mini[i]=min(v.d3,mini[i]);
                }
            }
            //cout<<mini[i]<<endl;
            i++;
        }
        int maxvalue=0;
        if(check==true){
            cout<<"trapped"<<endl;
        }
        else{
        loop1(i,3){
            if(mini[i]>maxvalue){
                maxvalue=mini[i];
            }
        }
        cout<<maxvalue<<endl;
        }
        //cout<<maxvalue<<endl;
        srce.clear();
        terget.clear();
        des.clear();
    }
    return 0;
}

