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
vector<int>graph[mx];
int main()
{
     int node,colum;
     cin>>node>>colum;
     for(int i=0;i<colum;i++){
        int u,v;
        cin>>u>>v;
        graph[u].pb(v);
     }
     for(int i=0;i<node;i++){
            cout<<i<<"->";
        for(int j=0;j<graph[i].size();j++)cout<<graph[i][j]<<' ';
        cout<<endl;
     }
    return 0;
}

