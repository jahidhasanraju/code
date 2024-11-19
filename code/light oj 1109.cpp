#include<bits/stdc++.h>
using namespace std;
#define mx 1001
int arr[mx];
int divs[mx];
struct s
{
    int dv;
    int val;
} str[mx];
void seive()
{
    for(int i=2; i<mx; i++)
    {
        divs[i]++;
        for(int j=i; j<mx; j+=i)
        {
            if(j%i==0)divs[j]++;
        }
    }
}
void fun()
{
    for(int i=1; i<=1000; i++)
    {
        str[i].dv=divs[i];
        str[i].val=i;
    }

}
bool structcomp(s str1,s str2)
{
    if(str1.dv!=str2.dv)return str1.dv<str2.dv;
    if(str1.dv==str2.dv)return str1.val>str2.val;
}
int main()
{
    divs[1]=1;
    arr[1]=0;
    seive();
    fun();
    sort(str+1,str+1001,structcomp);
    int t;
    cin>>t;
    int cs=1;
    while(t--)
    {
        int x;
        cin>>x;
        cout<<"Case "<<cs<<": "<<str[x].val<<endl;
        cs++;
    }
}

