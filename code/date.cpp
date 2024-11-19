#include<bits/stdc++.h>
using namespace std;
class Date
{
private:
    int day,month,year;
public:
    Date()
    {
        day = 0;
        month = 0;
        year = 0;
    }
    void set_Day(int x)
    {
        day =  x;
    }
    void set_month(int y)
    {
        month = y;
    }
    void set_year(int z)
    {
        year = z;
    }
    Date operator +(const Date &m)
    {
        Date d;
        d.day = this->day+m.day;
        if(d.day>30)
        {
            d.month ++;
            d.day = d.day-30;
        }
        d.month = this->month+m.month;
        d.year = this->year+m.year;
        if(d.month>12)
        {
            d.year++;
            d.month = d.month-12;
        }
        return d;
    }
    void display()
    {
        cout<<"Final Date is = "<<day<<" : "<<month<<" : "<<year<<endl;
    }
};
int main()
{
    Date obj,obj2;
    int a,b,c;
    cout<<"Day= ";
    cin>>a;
    cout<<"Month= ";
    cin>>b;
    cout<<"Year= ";
    cin>>c;
    obj.set_Day(a);obj.set_month(b);obj.set_year(c);
    int x,y,z;
    cout<<"Dates to be added:\nDay= ";
    cin>>x;
    cout<<"Month= ";
    cin>>y;
    cout<<"Year= ";
    cin>>z;
    obj2.set_Day(x);obj2.set_month(y);obj2.set_year(z);
    Date obj1 = obj+obj2;
    obj1.display();
    //cout<<"Final Date is = "<<obj1.day<<" : "<<obj1.month<<" : "<<obj1.year<<endl;
}
