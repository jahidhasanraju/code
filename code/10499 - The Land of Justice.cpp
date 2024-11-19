#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n;
    while(cin>>n&&n>0){
        if(n==1)cout<<"0%"<<endl;
        else
            cout<<25*n<<"%"<<endl;
    }
    return 0;
}
