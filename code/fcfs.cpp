#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter num of process: ";
    int n;
    cin>>n;
    int arrival[100];
    int burst[100];
    cout<<"Enter Arrival time: ";
    for(int i=0; i<n; i++)
    {
        cin>>arrival[i];
    }
    cout<<"Enter burst time: ";
    for(int i=0; i<n; i++)
    {
        cin>>burst[i];
    }
    vector<pair<int,int>>match;
    for(int i=0;i<n;i++){
        match.push_back({arrival[i],burst[i]});
    }
    sort(match.begin(),match.end());
//    for(int i=0;i<n;i++){
//        cout<<match[i].first<<' '<<match[i].second<<endl;
//    }
    vector<pair<int,int>>gant;
    for(int i=0; i<n; i++)
    {
        if(i==0)gant.push_back({0,match[0].second});
        else
            gant.push_back({gant[i-1].second,gant[i-1].second+match[i].second});
    }
    int wt=0;
    int cpt=0;
    int tat=0;
    int waitingtime[100];
    for(int i=0;i<n;i++){
            waitingtime[i]=abs(gant[i].first-arrival[i]);
            wt+=abs(gant[i].first-arrival[i]);
            cpt+=gant[i].second;
            tat+=burst[i]+waitingtime[i];
    }
    cout<<"avr waiting time:"<<float(wt/n)<<endl;
    //cout<<"avr complition time:"<<float(cpt/n)<<endl;
    cout<<"avr turn around time:"<<float(tat/n)<<endl;
    return 0;
}
