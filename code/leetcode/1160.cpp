#include<bits/stdc++.h>
using namespace std;
int main(){
         vector<string>words;
         string chars;
         cin>>chars;
         for(int i=0;i<4;i++){
            string s;
            cin>>s;
            words.push_back(s);
         }
        map<char,int>mp,mp1;
        int length=0;
        for(int i=0;i<chars.size();i++){
            char ch=chars[i];
            mp[ch]++;
        }
        for(int i=0;i<words.size();i++){
            string s=words[i];
           for(int i=0;i<s.size();i++){
               char ch=s[i];
               mp1[ch]++;
           }
           bool check=true;
           for(auto it=mp1.begin();it!=mp1.end();it++){
               char ch=it->first;
               cout<<"ch:"<<ch<<endl;
            if(mp1[ch]>mp[ch]){
                    cout<<mp[ch]<<' '<<mp1[ch]<<endl;
                    check=false;
            }
           }
           if(check==true)length+=s.size();
           cout<<"check:"<<check<<endl;
           cout<<"*********"<<endl;
        }

        cout<<length<<endl;
return 0;
}

