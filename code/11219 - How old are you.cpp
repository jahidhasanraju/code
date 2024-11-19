#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    while(cin>>n)
    {
        t=1;
        while(n--)
        {
            int d,m,y;
            int d1,m1,y1;
            char x;
            cin>>d>>x>>m>>x>>y;
            cin>>d1>>x>>m1>>x>>y1;
            int rd,rm,ry;
            rd=d-d1;
            if(rd<0)
                m1+=1;
            rm=m-m1;
            if(rm<0)
                y1+=1;
            ry=y-y1;
            if(ry<0)
                cout<<"Case #"<<t<<": "<<"Invalid birth date"<<endl;
            else if(ry>130)
                cout<<"Case #"<<t<<": "<<"Check birth date"<<endl;
            else
                cout<<"Case #"<<t<<": "<<ry<<endl;
            t++;
        }
    }
    return 0;
}
