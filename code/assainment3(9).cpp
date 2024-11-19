#include<bits/stdc++.h>
using namespace std;
int binary_nonrecurse(int arr[],int low,int high,int value)
{

    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==value)
        {
            return mid;

        }
        else if(value<arr[mid])
        {
            high=mid-1;
        }
        else if(value>arr[mid])
        {
            low=mid+1;
        }
    }
    return -1;
}

int binary_recurse(int arr[],int low,int high,int value)
{
    if(low>high)
    {
        return -1;
    }
    else
    {

        int mid=(low+high)/2;

        if(value==arr[mid])
        {
            return mid;
        }
        else if(value <arr[mid])
        {
            binary_recurse( arr, low,mid-1, value);
        }
        else if(value >arr[mid])
        {
            binary_recurse( arr, mid+1,high, value);
        }
    }

}

int main()
{
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int arr[n+5];
    cout<<"Enter sorted array"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the value to be searched"<<endl;
    int value;
    cin>>value;

    int res=binary_nonrecurse(arr,0,n-1,value);
    cout<<"result for non-recursive"<<endl;
    if(res==-1)
        cout<<"value is not present in array"<<endl;
    else
        cout<<"value is present at location "<<res<<endl;
    int res1=binary_recurse(arr,0,n-1,value);
    cout<<"result for recursive"<<endl;
    if(res1==-1)
        cout<<"value is not present in array"<<endl;
    else
        cout<<"value is present at location "<<res1<<endl;
    return 0;
}
