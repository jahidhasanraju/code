#include<bits/stdc++.h>
using namespace std;
int main(){
    int cnt=0;
    vector<vector<int> >points;
    for(int i=0;i<3;i++){
        vector<int>v;
        int x,y;
        cin>>x>>y;
        v.push_back(x);
        v.push_back(y);
        points.push_back(v);
    }
    for(int i=1;i<points.size();i++){
        int x=points[i][0];
        int y=points[i][1];
        int a=points[i-1][0];
        int b=points[i-1][1];
        cnt+=max(abs(x-a),abs(y-b));
    }
    cout<<cnt<<endl;
return 0;
}
