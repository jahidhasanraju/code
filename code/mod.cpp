#include<bits/stdc++.h>
using namespace std;
int mark [100];
vector<int>divisor[100];

void divisor(int n){
for(int i = 1; i <= n ; i ++ )
for(int j = i ; j <= n ; j += i )
divisor[j].push_back(i);
}
int main(){
    void divisor(12);
    for(int i=0;i<=12;i++){
        cout<<divisor[i]<<endl;
    }
return 0;
}
