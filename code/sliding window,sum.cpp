#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s_of_arr;
    cin>>s_of_arr;
    int k;
    cin>>k;
    deque<int>que;
    int sum=0;
    int max_sum=0;
    int i=0;
    while(i<s_of_arr)
    {
        int x;
        cin>>x;
        cout<<"x:"<<x<<endl;
        que.push_back(x);
        sum+=x;
        cout<<"sum:"<<sum<<endl;
        if(que.size()>k){
            sum-=que[0];
            cout<<"pop_element "<<que[0]<<endl;
            que.pop_front();
        }
        if(que.size()==k){
            if(sum>max_sum)max_sum=sum;
            cout<<"Max_sum:"<<max_sum<<endl;
        }
        i++;
    }
    cout<<max_sum<<endl;
}
