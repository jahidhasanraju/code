#include<bits/stdc++.h>
using namespace std;
#define mx 10000
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
vector<char>graph[100];
int visited[15][15];
int dis[15][15];
vector<pair<int,int>>source;
map<int,int>mp;

int main()
{
    int t,kase=1;
    cin>>t;
    while(t--)
    {
        int row,colum,num_source=0;
        cin>>row>>colum;
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<colum; j++)
            {mp[i+j]=1;
            }
        }

        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
             int k=it->first;
             //auto k=it->first;
             //int t=k->first;
             //int s=k->second;
             //tarpor cout kre dilei hbe..

            cout<<k<<" "<<it->second<<endl;
        }

    }
    return 0;
}
