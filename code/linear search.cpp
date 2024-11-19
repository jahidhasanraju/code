#include<bits/stdc++.h>
using namespace std;
vector<int>v;
bool check;
int linear_search(int key){
    for(int i=0;i<v.size();i++){
        if(v[i]==key){
            cout<<"key is present,and location:"<<i+1<<endl;
            check=true;
            break;
        }

    }
    if(check==false)cout<<"key is'nt present"<<endl;
}
int main(){
        cout<<"Enter num of element in array:";
        int n;cin>>n;
        cout<<"Enter element:"<<endl;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        cout<<"Enter key:";
        int key;cin>>key;
        linear_search( key);
        v.clear();

return 0;
}
int linear_search(int key){
    for(int i->0;i<list.length;i->i+1){
        if(list[j]==key){
            print->location;
            check->true;
            break;
        }
    }
    if(check->false)print->key does'nt exist in this list;
}
