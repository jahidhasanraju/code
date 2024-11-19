#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n<=7)
    {
        cout<<(n*(n+1))/2<<endl;
    }
    else
    {
        int cnt=0;
        int x=n/7;
        int i=1;
        while(i<=x)
        {
            int y=i+6;
            cnt+=((y*(y+1))/2);
            int a=i-1;
            cnt-=((a*(a+1))/2);
            i++;
        }
        int y=n-(x*7);
        y--;
        int z=i+y;
        cnt+=((z*(z+1))/2);
        int a=i-1;
        cnt-=((a*(a+1))/2);
        cout<<cnt<<endl;
    }
    return 0;
}

