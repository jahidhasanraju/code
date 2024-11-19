#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    if (n == 0)
    {
        v.push_back(0);
    }
    else if (n == 1)
    {
        v.push_back(0);
        v.push_back(1);
    }
    else
    {
        v.push_back(0);
        v.push_back(1);
        for (int i = 2; i <= n; i++)
        {
            int x,y;
            if (i % 2 == 0)
            {
                x = i / 2;
                y=v[x];
                cout<<"Y:"<<y<<endl;
                v.push_back(y);
            }
            else
            {
                x = i / 2;
                y=v[x]+1;
                v.push_back(y);
            }
            cout<<"i:"<<i<<' '<<v[i]<<endl;
        }
    }
    for(int x:v){
        cout<<x<<' ';
    }
    cout<<endl;
    return 0;
}
