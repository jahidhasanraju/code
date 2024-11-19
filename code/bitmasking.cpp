#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=4;
    int arr[]= {5,3,2,4};
    for(int mask=1; mask<(1<<n); mask++)
    {
        for(int i=0; i<n; i++)
        {
            if((mask&(1<<i))>0)
            {
                cout<<arr[i]<<' ';
            }
        }
        cout<<endl;
    }
}
