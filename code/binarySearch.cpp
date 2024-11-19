#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);

    int idx=lower_bound(arr,arr+n,10)-arr;
    cout<<idx<<' '<<arr[idx]<<endl;
return 0;
}
