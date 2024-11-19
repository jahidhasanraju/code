#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[10000];
    for(int i=0; i<n-1; i++)
    {
        cin>>arr[i];
    }
    int x,y;
    cin>>x>>y;
    x--;
    y--;
    int result=0;
    for(int i=x; i<y; i++)
    {
        result+=arr[i];
    }
    cout<<result<<endl;
}
