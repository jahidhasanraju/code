#include<bits/stdc++.h>
using namespace std;
int initial_arr[3][3];
int input[3][3];
int dx[]= {-1,1,0,0,-1,-1,1,1};
int dy[]= {0,0,-1,1,-1,1,-1,1};
int main()
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>input[i][j];
        }
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(input[i][j]%2!=0)
            {
                initial_arr[i][j]=(initial_arr[i][j]^1);
                for(int k=0; k<4; k++)
                {
                    int x=i+dx[k];
                    int y=j+dy[k];
                    if((x>=0&&x<3)&&(y>=0&&y<3))
                    {
                        initial_arr[x][y]=(initial_arr[x][y]^1);
                    }
                }
            }
        }
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<(initial_arr[i][j]^1);
        }
        cout<<endl;
    }
}
