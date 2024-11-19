#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
string stringsub(string ss,string s,int n){
              for(int i=0;i<n;i++){
                int x=ss[i]-'0';
                int y=s[i]-'0';
                ss[i]=(x-y)+'0';
              }
              return ss;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(s[0]!='9'){
            string ss="";
            for(int i=0;i<n;i++)ss+='9';
            s=stringsub(ss,s,n);
        }
        else{
            string str="0";
            s=str+s;
            string ss="";
            for(int i=0;i<=n;i++)ss+='1';
            int carry=0;
            for(int i=ss.size()-1;i>=0;i--){
                int x=ss[i]-'0';
                int y=s[i]-'0';
                y=y+carry;
                if(y>x){
                    x+=10;
                    x=x-y;
                    s[i]=x+'0';
                    carry=1;
                }
                else{
                    x=x-y;
                    s[i]=x+'0';
                    carry=0;
                }
            }
            str="";
            for(int i=1;i<s.size();i++){
                str+=s[i];
            }
            s=str;
        }
        cout<<s<<endl;
    }

    return 0;
}
