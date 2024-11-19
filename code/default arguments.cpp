#include<bits/stdc++.h>
using namespace std;
class number{
    int x,y;
public:
    number(){x=0;y=0;}
    number(int a,int b){
        x=a;
        y=b;
    }
    void print(){
    cout<<x<<' '<<y<<endl;
    }
    number operator+(number obj);
    bool operator>(number obj);
    bool operator<(number obj);
    bool operator==(number obj);
};
number number::operator+(number obj){
        number temp;
        temp.x=x+obj.x;
        temp.y=y+obj.y;
        return temp;
    }
bool number::operator>(number obj){
    return (x+y)>(obj.x+obj.y);
}
bool number::operator<(number obj){
    return (x+y)<(obj.x+obj.y);
}
bool number::operator==(number obj){
    return (x+y)==(obj.x+obj.y);
}
int main(){
    number n1(5,4),n2(1,3),n3;
    n3=n1+n2;
    n3.print();
    if(n1>n2)cout<<"n1"<<endl;
    else if(n1==n2)cout<<"n1==n2"<<endl;
    else cout<<"n2"<<endl;
}
