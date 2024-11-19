#include<bits/stdc++.h>
using namespace std;
int arr[100];
 int climbStairs(int n) {
       if(n==1){
           arr[n]=1;
           return 1;
       }
       if(n==2) {
           arr[n]=2;
           return 2;
       }
       if(arr[n]!=-1){
            cout<<"***"<<endl;
            return arr[n];
       }
       return arr[n]=arr[n-1]+arr[n-2];
    }
int main(){
    memset(arr,-1,sizeof(arr));
    for(int i=0;i<100;i++){
        cout<<arr[i]<<endl;
    }
    for(int i=0;i<10;i++){
        int n;
        cin>>n;
        cout<<climbStairs(n)<<endl;
    }
return 0;
}
