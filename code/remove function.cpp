#include<bits/stdc++.h>
using namespace std;
const int mx=1e6;
int arr[mx];
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++)cin>>arr[i];
        //int i,j;
        for(int i=0, j=n-1;i<n,j>=0;i++,j--)cout<<"*"<<endl;
    }
return 0;
}
