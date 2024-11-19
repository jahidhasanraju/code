#include<bits/stdc++.h>
using namespace std;
#define inf              INT_MAX
#define minf             INT_MIN;
#define mx               100
#define pb               push_back
#define pf               push_front
#define popf             pop_front
#define popb             pop_back
#define mem(a, v)        memset(a, v, sizeof(a))
#define TEST_CASE(t)     for(int z=1;z<=t;z++)
#define loop(i,n)        for(int i=0;i<n;i++)
#define loop1(i,n)       for(int i=1;i<=n;i++)
#define CASE_PRINT       cout<<"Case "<<z<<": "
typedef long long int ll;
const int n=1e6+100;
const int infi = 1e9;
//2d gride:first 4 move are side move and last 4 move are diagonal movement..
int dx[]= {-1,1,0,0,-1,-1,1,1};
int dy[]= {0,0,-1,1,-1,1,-1,1};
//knight move:
int kx[]= {1,1,2,2,-1,-1,-2,-2};
int ky[]= {2,-2,1,-1,2,-2,1,-1};
map<char,int>mp1;
map<char,int>mp2;
int dmcnt,mcnt;
string minimumwindow(string s)
{
    string ans="";
    int i=0,j=0;
    while(true)
    {
        bool flag1=false;
        bool flag2=false;
        while(i<s.size()-1&&mcnt<dmcnt)
        {
            ///aquire
            char ch=s[i];
            mp1[ch]++;
            if(mp1[ch]<=mp2[ch])
            {
                mcnt++;
            }
            i++;
            flag1=true;
        }
        while(j<i && mcnt==dmcnt)
        {
            ///collect
            string ss;
            for(int k=j; k<i; k++)
            {
                ss.pb(s[k]);
            }
            if(ans.size()==0||ans.size()>ss.size())
            {
                ans=ss;
                ss.clear();
            }
            ///release
            char ch1=s[j];
            mp1[ch1]--;
            int x=mp1[ch1];
            int y=mp2[ch1];
            if(x<y)
            {
                mcnt--;
            }
            j++;
            flag2=true;
        }
        if(flag1==false && flag2==false)break;
    }
    return ans;
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    loop(i,s2.size())
    {
        mp2[s2[i]]++;
        dmcnt++;
    }
    cout<<minimumwindow(s1)<<endl;

    return 0;
}

