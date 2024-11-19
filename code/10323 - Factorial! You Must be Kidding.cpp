#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
ll result;
ll fectorial(int n)
{
    if(n==0)
        return 1;
    return n*fectorial(n-1);
}
int main()
{
    int n;
    while(cin>>n)
    {
        if(n<0&&n%2==0)cout<<"Underflow!"<<endl;
        else if(n<0&&n%2!=0)cout<<"Overflow!"<<endl;
        else if(n>=0&&n<=7)cout<<"Underflow!"<<endl;
        else if(n>13)cout<<"Overflow!"<<endl;
        else cout<<fectorial(n)<<endl;
    }
    return 0;
}
