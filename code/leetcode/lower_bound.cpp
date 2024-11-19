#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,3,5,6};
    int indx=lower_bound(arr,arr+4,5)-arr;
    int indx1=lower_bound(arr,arr+4,4)-arr;
    cout<<indx<<' '<<indx1<<endl;
return 0;
}
