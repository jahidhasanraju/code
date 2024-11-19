#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
   typedef long long int ll;
        ll cnt=0;
        ll lng=0;
        int arr[1000];
        memset(arr,0,sizeof(arr));
        for(int i=0;i<s.size();i++){
            lng++;
            int x=s[i]-0;
            arr[x]++;
            for(int j=i+1;j<s.size();j++){
               int y=s[j]-0;
               if(arr[y]==0){
                  lng++;
               arr[y]++;
               if(lng>=cnt)cnt=lng;
               }
               else break;

            }
            memset(arr,0,sizeof(arr));
            lng=0;
        }
        cout<<cnt<<endl;
return 0;
}
