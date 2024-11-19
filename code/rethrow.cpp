#include<bits/stdc++.h>
using namespace std;
int excep(int a)(int){
   if(a==1)throw 1;
   if(a==2)throw 2.5;
}
int main(){
    try{
    excep(1);
    excep(2);
    }
    catch(...){
    cout<<"ok"<<endl;
    }

}
