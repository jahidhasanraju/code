#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>& h, int bricks, int ladders, int i)
{
    if (bricks == 0)
        return i + 1;
    if (bricks < 0)
        return i;
    if (ladders == 0)
        return i + 1;
    if (h[i + 1] <= h[i])
    {
        solve(h, bricks, ladders, i);
    }
    else
    {
        int x=bricks-h[i];
        if(x>0)
            solve(h,bricks-h[i],ladders,i+1);
        solve(h,bricks,ladders-1,i+1);
    }
    return i;
}
int main()
{
    int n;
    cin>>n;
    vector<int>h;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        h.push_back(x);
    }
    int bricks,ladder;
    cin>>bricks>>ladder;
    int x=solve(h,bricks,ladder,0);
    cout<<x<<endl;
    return 0;
}
