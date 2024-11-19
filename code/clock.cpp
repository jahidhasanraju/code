#include<bits/stdc++.h>
using namespace std;
#define mx 100005
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int arr[mx];
        int n,x;
        cin>>n>>x;
        int num1=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]==1){
            num1++;
            }
        }
        if(num1<x)cout<<-1<<endl;
        else
        {
            int cnt=0;
            int i,j;
            int ll=-1,lr=n;
            for(i=0,j=n-1; i<=j; i++,j--)
            {
                if(num1==x)break;
                if(i==j && arr[i]==1)
                {
                    num1--;
                    cnt+=i-ll;
                }
                if(num1==x)break;
                if(arr[i]==1)
                {
                    cnt+=i-ll;
                    num1--;
                    ll=i;
                }
                if(num1==x)break;
                if(arr[j]==1){
                    cnt+=lr-j;
                    num1--;
                    lr=j;
                }
            }
        cout<<cnt<<endl;
        }
    }
    return 0;
}
