#include<bits/stdc++.h>
using namespace std;
int fibu(int n){
if(n==0)return 0;
if(n==1)return 1;
cout<<"fibu("<<n-1<<")"<<"fibu("<<n-2<<")"<<"\n";
  fibu(n-1)+fibu(n-2);
}
int main(){
    cout<<fibu(4)<<endl;
return 0;
}
