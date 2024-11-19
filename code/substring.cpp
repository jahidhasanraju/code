#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ss="";
    string s1;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        int center=i;
        int low=center;
        if(center>0)
            low=center-1;
        int high=center+1;
        if(s[low]==s[high])
        {
            cout<<"**"<<low<<' '<<center<<' '<<high<<endl;
            while(s[low]==s[high] && low>=0 && high<s.size())
            {
                s1=s.substr(low,(high-low+1));
                low--;
                high++;
            }
        }
        if(s[center]==s[high])
        {
            cout<<"****"<<endl;
            cout<<low<<' '<<center<<' '<<high<<endl;
            s1=s.substr(center,2);
            high++;
            if(s[low]==s[high])
            {
                while(s[low]==s[high] && low>=0 && high<s.size())
                {
                    s1=s.substr(low,(high-low+1));
                    low--;
                    high++;
                }
            }
        }
        if(s1.size()>ss.size())
            ss=s1;

    }
    if(ss.size()==0)ss=s[0];
    cout<<ss<<endl;
    return 0;
}
