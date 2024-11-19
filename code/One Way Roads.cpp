#include<bits/stdc++.h>
using namespace std;
#define inf              INT_MAX
#define minf             INT_MIN;
#define mx               500
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
struct value{
      int x;
      int y;
      int v;
};
vector<value>vv;
vector<int>graph[mx];
bool visited[mx];
int srce1,srce2;
int main()
{
    int t;
    cin>>t;
    TEST_CASE(t){
        int rode;
        cin>>rode;
        int Max=0;
        loop(i,rode){
            int u,v,w;
            cin>>u>>v>>w;
            vv.pb({u,v,w});
            if(w>Max){
                Max=w;
                srce1=u;
                srce2=v;
            }
            graph[u].pb(v);
            graph[v].pb(u);
        }
        cout<<srce1<<srce2<<endl;
      // bfs(srce);
       vv.clear();
       loop1(i,100){
       graph[i].clear();
       }
    }
    return 0;
}


