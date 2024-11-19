#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int i=0,j=s.size()-1;
    while(i<j){
            cout<<s[i]<<endl;
           int x=s[i];
           int y=s[j];
           cout<<x<<' '<<y<<endl;
           if(x>=65 && x<=90){
               x+=32;
               s[i]=x;
           }
           if(y>=65 && y<=90){
               y+=32;
               s[j]=y;
           }
           i++;
           j--;
        }
        cout<<s<<endl;
return 0;
}
