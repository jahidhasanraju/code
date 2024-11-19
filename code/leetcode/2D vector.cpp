#include<bits/stdc++.h>
using namespace std;
const int inf=INT_MAX;
int dp[100][100];
int dfs(int row, int col, vector<vector<int>> v)
{
    if (row >= v.size() && col >= v.size())
    {
        cout << "#" << endl;
        return v[row][col];
    }
    if (dp[row][col] != -1)
    {
        cout << "**" << endl;
        return dp[row][col];
    }
    if (row >= 0 && row < v.size() && col >= 0 && col < v.size())
    {
        cout << row << ' ' << col << endl;
        int x = v[row][col] + dfs(row + 1, col, v);
        int y = v[row][col] + dfs(row + 1, col - 1, v);
        int z = v[row][col] + dfs(row + 1, col + 1, v);
        int p = min(x, y);
        return dp[row][col] = min(p, z);
    }
    return dp[row][col];
}
int main()
{
    memset(dp,inf,sizeof(dp));
    vector<vector<int>>v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        vector<int>p;
        for(int j=0; j<n; j++)
        {
            int x;
            cin>>x;
            p.push_back(x);
        }
        v.push_back(p);
    }
    dfs(0,0,v);
    return 0;
}
