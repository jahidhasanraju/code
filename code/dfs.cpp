#include<bits/stdc++.h>
using namespace std;
#define mx 1000
#define pb push_back
vector<int>graph[mx];
bool visited[mx];
int arr[mx];
void dfs(int source){
   visited[source]=true;
   for(int i=0;i<graph[source].size();i++){
    int next=graph[source][i];
    if(visited[next]==0)dfs(next);
   }
}
int main()
{
    int nodes,edges;
    cin>>nodes>>edges;
    for(int i=0;i<edges;i++)
    {
        int n,x;
        cin>>n>>x;
        graph[n].pb(x);
        graph[x].pb(n);
    }
    for(int i=0;i<nodes;i++){
        cout<<i<<"->";
        for(int j=0;j<graph[i].size();j++)
        {
            cout<<graph[i][j]<<' ';
        }
        cout<<endl;
    }
    for(int i=0;i<nodes;i++){
        dfs(i);
    }
    for(int i=0;i<nodes;i++)cout<<visited[i]<<' ';
}
/*
5 4
0 1
1 2
1 3
3 4
*/
