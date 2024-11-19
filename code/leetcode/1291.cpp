#include<bits/stdc++.h>
using namespace std;
bool inrange(int lo, int hi, int x)
{
    if (x >= lo && x <= hi)
        return true;
    return false;
}
int main()
{
    int low,high;
    cin>>low>>high;
    queue<int> q;
    vector<int> v;
    int i = 1;
    while (i <= 8)
    {
        q.push(i);
        i++;
    }
    int append=0;
    while (!q.empty())
    {
        int temp = q.front();
         q.pop();
        int x = temp % 10;
        if (x+1<=9)
            append = temp * 10 + (x + 1);
        if(x+1>=10)continue;
        if (inrange(low, high, append))
        {
            v.push_back(append);
        }
        if(append<=high)
        {
            cout<<"append:"<<append<<endl;
            q.push(append);
        }
    }
    cout<<"***"<<endl;
    for(int x:v)
    {
        cout<<x<<' ';
    }
    return 0;
}
