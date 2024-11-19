#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int x,y,n;
    cin>>x>>y>>n;
    int arr[n];
    arr[0]=x;
    int p=n-1;
    for(int i=1;i<n;i++){
        arr[i]=arr[i-1]+p;
        p--;
    }
    if(arr[n-1]<=y){
     if(arr[n-1]<y)arr[n-1]=y;
     for(int i=0;i<n;i++)cout<<arr[i]<<' ';
    cout<<endl;
    }
    else cout<<-1<<endl;

}
return 0;
}
