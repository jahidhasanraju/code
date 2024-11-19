#include<bits/stdc++.h>
using namespace std;
class base{};
class derive:public base{};
int main(){
    derive d;
    try{
        throw d;
    }
    catch(base b){
        cout<<"base Exception"<<endl;
    }
    catch(derive d){
    cout<<"derive exception"<<endl;
    }
}
