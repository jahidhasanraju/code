#include<bits/stdc++.h>
using namespace std;
#define inf INT_MAX
#define minf INT_MIN;
#define mx 100000000
#define pb push_back
#define pf push_front
#define popf pop_front
#define popb pop_back
#define mem(a, v) memset(a, v, sizeof(a))
typedef long long int ll;
const int n=1e6+100;
const int infi = 1e9;
//2d gride:first 4 move are side move and last 4 move are diagonal movement..
int dx[]= {-1,1,0,0,-1,-1,1,1};
int dy[]= {0,0,-1,1,-1,1,-1,1};
//knight move:
int kx[]= {1,1,2,2,-1,-1,-2,-2};
int ky[]= {2,-2,1,-1,2,-2,1,-1};
bool visited[mx];
int dis[mx];string terget;
queue<string>duck;
int convert_string_num(string ss){
    int num=0;
       for(int i=0;i<4;i++){
            int x=ss[i]-'0';
         num=num*10+x;
       }
       return num;
}
void bfs_posssible_state(string s){
    visited[0000]=true;
    dis[0000]=0;
    duck.push(s);
    int num;
    while(!duck.empty()){

        string source=duck.front();
        int source2=convert_string_num("source");
        duck.pop();
        for(int i=0;i<4;i++){
            char c=s[i];
            s[i]=(c-'0'+1)%10+'0';
            num=convert_string_num("s");
            if(visited[num]==false && s!=terget){
                    duck.push(s);
                visited[num]=true;
                dis[source2]+1;
            }
            s[i]=(c-'0'-1+10)%10;
            num=convert_string_num("s");
            if(visited[num]==false && s!=terget){
                    duck.push(s);
                visited[num]=true;
                dis[source2]+1;
            }
            else{
                break;
            }
            s[i]=c;
        }
    }
}
int main()
{
    cout<<"NUM_deadend:"<<endl;
    int num_deadend;
    cin>>num_deadend;
    cout<<"enter deadends:"<<endl;
    for(int i=0;i<num_deadend;i++){
        int x;
        cin>>x;
        visited[x]=true;
    }
    cout<<"enter terget:"<<endl;
    cin>>terget;
    bfs_posssible_state("0000");
    return 0;
}


