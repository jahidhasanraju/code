#include<bits/stdc++.h>
using namespace std;
void permute(int n,int m){
    if(n==0)cout<<n<<endl;
       swap(n,m);
       permute(n,m-1);
}
int main(){
    permute(4,3);
   return 0;
}
