#include<bits/stdc++.h>
using namespace std;
#define SIZE 5


class deque_type{
private:
    int front;
    int back;
    int deque_arr[SIZE];
public:
    deque_type();
    bool isfull();
    bool isempty();
    void insert_front( int key);
     void insert_back( int key);
    void delete_front();
     void delete_back();
    void display();


};

deque_type::deque_type()
{

front=-1;
back=-1;

}

 bool deque_type::isfull()
 {
     if(front==(back+1)||back==(SIZE-1))
     {
         return true;
     }
     else
     {
         return false;
     }
 }


bool deque_type:: isempty(){

if(front==-1&&back==-1)
{
    return true;
}
else
{
    return false;
}

}

 void deque_type::insert_front( int key)
 {
 if(isfull())
 {
     cout<<"deque is full"<<endl;
     return;
 }

 else if(front==-1&&back==-1)
 {
     front=0;
     back=0;
     deque_arr[front]=key;

 }
 else if(front==0)
 {
     front=SIZE-1;
     deque_arr[front]=key;

 }
 else
 {
     front--;
     deque_arr[front]=key;
 }

 }


 void deque_type::insert_back( int key)
 {
 if(isfull())
 {
     cout<<"deque is full"<<endl;
     return;
 }

 else if(front==-1&&back==-1)
 {
     front=0;
     back=0;
     deque_arr[back]=key;

 }
 else if(back==SIZE-1)
 {
     back=0;
     deque_arr[back]=key;

 }
 else
 {
    back++;
     deque_arr[back]=key;
 }

 }

 void deque_type::delete_front()
 {
     if(isempty())
     {
         cout<<"deque is empty"<<endl;
         return;
     }
     else if(front==back)
     {
          cout<<"the poped element is : "<<deque_arr[front]<<endl;
         front=back=-1;
     }
     else if(front==SIZE-1)
        {

        cout<<"the poped element is : "<<deque_arr[front]<<endl;
        front=0;
     }
     else{
        cout<<"the poped element is : "<<deque_arr[front]<<endl;
        front++;
     }

 }

 void deque_type::delete_back()
 {
     if(isempty())
     {
         cout<<"deque is empty"<<endl;
         return;
     }
     else if(front==back)
     {
         cout<<"the poped element is : "<<deque_arr[back]<<endl;
         front=back=-1;
     }
     else if(back==0)
        {

        cout<<"the poped element is : "<<deque_arr[back]<<endl;
        back=SIZE-1;
     }
     else{
        cout<<"the poped element is : "<<deque_arr[back]<<endl;
        back--;
     }
 }


int main()
{
    deque_type obj;
    int m,n;
    for(;;)
    {
        cout<<"choice list"<<endl;
        cout<<"1 : insert at front"<<endl;
        cout<<"2 : insert at back"<<endl;
        cout<<"3 : delete from front"<<endl;
        cout<<"4 : delete from back"<<endl;
        cout<<"5 : end"<<endl;
        cout<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>n;
        if(n==1)
        {
            cout<<"enter element"<<endl;
            cin>>m;
            obj.insert_front(m);
        }
        else if(n==2)
        {
            cout<<"enter element"<<endl;
            cin>>m;
            obj.insert_back(m);
        }
        else if(n==3)
        {

            obj.delete_front();

        }
        else if(n==4)
        {
            obj.delete_back();
        }

        else if (n==5)
        {
            break;
        }
    }
    return 0;
}
