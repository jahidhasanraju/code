#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0; s[i]!='.'; i++)
    {
        if(s[i]!='.')s[i]='0';
    }
    stringstream ss(s);
    double x=0;
    ss>>x;
    double sum=x;
    //cout<<sum<<endl;
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        for(int i=0; s[i]!='.'; i++)
        {
            if(s[i]!='.')s[i]='0';
        }
        stringstream ss(s);
        double x=0;
        ss>>x;
        sum+=x;
        //cout<<"x1:"<<x<<' '<<"sum1:"<<sum<<endl;
        if(x!=0 && sum<1 )cnt++;
        if(sum>=1)sum--;
       // cout<<"x:"<<x<<' '<<"cnt:"<<cnt<<' '<<"sum:"<<sum<<endl;
    }
    cout<<cnt<<endl;
    return 0;
}
