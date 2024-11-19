#include<bits/stdc++.h>
using namespace std;
#define mx 100
int arr[mx],arr2[mx];
vector<pair<int,int>>v;
int main(){
    cout<<"input size of memory"<<endl;
     int n;
     cin>>n;
     cout<<"input value ";
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     arr2[]=arr[];
     for(int i=0;i<n;i++)cout<<arr2[i]<<endl;
     sort(arr,arr+n);
     cout<<"input memory value: ";
     int val;
     cin>>val;
     int pos=(lower_bound(arr,arr+n,val)-arr);
     cout<<"best fit:";
     cout<<arr[pos]<<endl;
     cout<<"worst fit:";
     cout<<arr[n-1]<<endl;

return 0;
}
