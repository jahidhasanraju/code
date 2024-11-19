#include<bits/stdc++.h>
using namespace std;
class rectangle
{
private:
    int height;
    int weight;
public:
    rectangle(int x,int y)
    {
        height=x;
        weight=y;
    }
    int area()
    {
        return height*weight;
    }
};
class cost: public rectangle
{
    ///height,weight,rectangle(),area();
    int tk;
public:
    set(int x)
    {
        tk=x;
    }
    int totalcost()
    {
        return area()*tk;
    }
};
int main()
{
    rectangle ob(5,6);
    cost obj;
    cout<<obj.area()<<endl;
    cout<<obj.totalcost()<<endl;
    return 0;
}
