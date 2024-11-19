#include<bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();
    // cout << row << ' ' << col << endl;
    int num_of_box = row * col;
    int num_of_row, num_of_col;
    int hi = num_of_box;
    int lo = 0;
    while (lo + 1 < hi)
    {
        int mid = (lo + hi) / 2;
        num_of_row = (mid / row) - 1;
        if (num_of_row < 0)
            num_of_row = 0;
        int x = mid % col;
        if (x == 0)
            num_of_col = col - 1;
        else
            num_of_col = x - 1;

        if (matrix[num_of_row][num_of_col] > target)
            hi = mid;
        else
            lo = mid;
        //cout<<"mid:"<<mid<<' '<<"row:"<<num_of_row<<' '<<"col:"<<num_of_col<<' '<<matrix[num_of_row][num_of_col]<<endl;
    }
    num_of_row = (lo / row) - 1;
    if (num_of_row < 0)
        num_of_row = 0;
    int x = lo % col;
    if (x == 0)
        num_of_col = col - 1;
    else
        num_of_col = x - 1;
    //cout<<matrix[num_of_row][num_of_col]<<endl;
    if(matrix[num_of_row][num_of_col]==target)return true;
    if(num_of_col==col-1)
    {
        num_of_col=0;
        num_of_row+=1;
    }
    else num_of_col+=1;
    if(matrix[num_of_row][num_of_col]==target)return true;
    return false;
}
int main()
{
    vector<vector<int>>v;
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        vector<int>y;
        for(int j=0; j<m; j++)
        {
            int x;
            cin>>x;
            y.push_back(x);
        }
        v.push_back(y);
    }
    int target;
    cin>>target;
    cout<<searchMatrix(v,target);
    return 0;
}
