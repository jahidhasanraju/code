#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int numofmatch=0;
        while(n/2!=0){
            cout<<"n:"<<n<<' '<<"n/2:"<<n/2<<endl;
            numofmatch+=n/2;
            int carry=n%2;
            n=n/2+carry;
        }
        cout<<numofmatch<<endl;
return 0;
}
