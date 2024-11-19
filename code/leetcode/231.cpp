#include<bits/stdc++.h>
using namespace std;
int fib(int n,int arr[35]){
        if(n==1){
            arr[n]=0;
            return 0;
        }
        if(n==2){
            arr[n]=1;
            return 1;
        }
      return arr[n]=fib(n-1,arr)+fib(n-2,arr);
}
int main(){
    int arr[35];
    int n;
    cin>>n;
    fib(9,arr);
    for(int i=0;i<9;i++){
        cout<<"I:"<<i<<"->"<<arr[i]<<endl;
    }


return 0;
}
