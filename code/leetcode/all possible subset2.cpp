#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10];
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0; i<(1<<n); i++)
    {
        bitset<8>bt(i);
        int value=0;
        cout<<"subset:"<<endl;
        for(int j=0; j<n; j++)
        {
            if(bt[j])
            {
                value=(value ^ arr[j]);
                cout<<arr[j]<<' ';
            }
        }
        cout<<endl;
        cout<<"value:"<<value<<endl;
        sum+=value;
        cout<<endl;
    }
    cout<<"sum:"<<sum<<endl;
    return 0;
}
