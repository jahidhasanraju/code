#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    vector<char>v;
    char n;
    cin>>n;
    for(int i=0;i<n;i++){
        char x;
        cin>>x;
        v.push_back(x);
    }
        ll lo=0;
        ll hi=letters.size()-1;
        while(lo+1<hi){
         ll mid=(lo+hi)/2;
         if(letters[mid]>target)hi=mid;
         else lo=mid;
        }
return 0;
}
