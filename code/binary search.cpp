#include<bits/stdc++.h>
using namespace std;
#define inf INT_MAX
#define minf INT_MIN;
#define mx 100
#define pb push_back
#define pf push_front
#define popf pop_front
#define popb pop_back
//2d gride:first 4 move are side move and last 4 move are diagonal movement..
int dx[]= {-1,1,0,0,-1,-1,1,1};
int dy[]= {0,0,-1,1,-1,1,-1,1};
//knight move:
int kx[]= {1,1,2,2,-1,-1,-2,-2};
int ky[]= {2,-2,1,-1,2,-2,1,-1};
int mysquart(float x){
     float low=0.0,high=x;
     float mid;
     while(high-low>.0001){
        mid=(high+low)/2;
        if(mid*mid>x){
            high=mid;
        }else low=mid;
     }
     cout<<mid<<' '<<mid*mid<<endl;
     return mid;

}
int main()
{
   float x;
   cin>>x;
   mysquart(x);
    return 0;
}


