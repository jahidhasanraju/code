#include<bits/stdc++.h>
using namespace std;
int romanToInt(string s) {
         typedef long long int ll;
         ll x=0;
        for(int i=0;i<s.size(); ){
            if(s[i]=='I'&&s[i+1]=='V'){
                x+=4;
                i+=2;
            }
            else if(s[i]=='I'&&s[i+1]=='X'){
                x+=9;
                i+=2;
            }
            else if(s[i]=='X' && s[i+1]=='L')
            {
                x+=40;
                i+=2;
            }
            else if(s[i]=='X' && s[i+1]=='C')
            {
                x+=90;
                i+=2;
            }
            else if(s[i]=='C' && s[i+1]=='D')
            {
                x+=400;
                i+=2;
            }
            else if(s[i]=='C' && s[i+1]=='M')
            {
                x+=900;
                i+=2;
            }
            else if(s[i]=='I'){
                    cout<<"i"<<' '<<i<<endl;
                x+=1;
                i++;
            }
            else if(s[i]=='V'){
                    cout<<"###"<<endl;
                x+=5;
                i++;
            }
            else if(s[i]=='X'){
                x+=10;
                i++;
            }
            else if(s[i]=='L'){
                    cout<<"****"<<endl;
                x+=50;
                i++;
            }
            else if(s[i]=='C'){
                x+=100;
                i++;
            }
            else if(s[i]=='D'){
                x+=500;
                i++;
            }
            else if(s[i]=='M'){
                x+=1000;
                i++;
            }
        }
        return x;
    }
    int main(){
        string s;
        cin>>s;
       cout<< romanToInt(s)<<endl;
    return 0;
    }
