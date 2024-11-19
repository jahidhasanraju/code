#include<bits/stdc++.h>
#define pb              push_back
using namespace std;
int main()
{
    cout<<"Enter no. of node && edges: ";
    int v,e;
    cin>>v>>e;
    vector<vector<int> > g(v);
    cout<<"Enter Relation btwn node:"<<endl;
    for(int i=0; i<e; i++)
    {
        int x,y;
        cin>>x>>y;
        g[x].pb(y);
        g[y].pb(x);
    }
    int res[v];
    bool available[v];
    res[0]=0;
    for(int i=1; i<v; i++)
        res[i] = -1;
    for(int i=0; i<v; i++)
        available[i] = false;

    int cn = 0;
    for(int i=1; i<v; i++)
    {
        for(auto x:g[i])
        {
            if(res[x]!=-1)
            {
                available[res[x]] = true;
            }
        }

        int cr;
        for(cr=0; cr<v; cr++)
        {
            if(available[cr] == false)
            {
                break;
            }
        }

        res[i] = cr;
        cn = max(cn,cr+1);

        for(auto x:g[i])
        {
            if(res[x]!=-1)
            {
                available[res[x]] = false;
            }
        }
    }
    cout<<"num of colour:"<<endl;
    cout<<cn<<endl;
    cout<<"colour in node:"<<endl;
    for(int i=0; i<v; i++)
        cout<<res[i]<<" ";

    return 0;

}
cout<<"pesuducode"<<endl;

//for(i->0 to vertext) result[i]=-1;
//for(i->0 to vertext) available[i]=false;
//result[0]=0;
//for(i->1 to i< vertext){
//    for(x:g[i]){
//        if(res[x]!=-1){
//            available[res[x]] = true;
//        }
//    }
//    for(cr=0; cr<v; cr++)
//    {
//        if(available[cr] == false)
//        {
//            break;
//        }
//    }
//    result[i]=cr;
//    for(auto x:g[i])
//    {
//        if(res[x]!=-1)
//        {
//            available[res[x]] = false;
//        }
//    }

