#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>numbers{1,3,4,4};
    int target=8;
    vector<int>v;
    for(int i=0; i<numbers.size(); i++)
    {
        int k=target-numbers[i];
        auto it=numbers.begin();
        //vector<int>::iterator it;
        it=numbers.begin()+(i+1);
        int indx=lower_bound(it,numbers.end(),k)-numbers.begin();
        cout<<"i:"<<i<<' '<<"index:"<<indx<<endl;
        if(indx<numbers.size()&& numbers[indx]==k)
        {
            v.push_back(i+1);
            v.push_back(indx+1);
            break;
        }
    }
    for(int x:v)cout<<x<<' ';
    return 0;
}
