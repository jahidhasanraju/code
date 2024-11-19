#include<bits/stdc++.h>
using namespace std;
template<class T>
struct node
{

    T data;
    node *previous;
    node *next;

};

template<class T>
class double_list
{
private:
   struct node<int> *head,*tail;

public:
    double_list()
    {
        head=NULL;
        tail=NULL;
    }

    void create_node(T n)
    {
        struct node<int> *temp=new node<int>;
        temp->data=n;
        temp->previous=NULL;
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
            tail=temp;
        }
        else
        {
            tail->next=temp;
            temp->previous=tail;
            tail=temp;

        }
    }

    void delete_node(T num,int cnt_node)
    {
        int cnt=0;
       node<int> *temp=new node<int>;
        temp=head;
        while(temp!=NULL)
        {
            cnt++;
            if(temp->data==num)
            {

                break;
            }
            temp=temp->next;
        }


        //cout<<cnt<<endl;


            if(cnt==1)
            {
               node<int> *temp1;
                cout<<"delete from begin"<<endl;
                temp1=head;
                head=head->next;
                head->previous=NULL;
                delete temp1;

            }
            else if(cnt==cnt_node)
            {

                cout<<"delete from end"<<endl;
                node<int> *temp1, *temp2;
                temp2=head;

                while(temp2->next!=NULL)
                {
                    temp1=temp2;
                    temp2=temp2->next;
                }
                temp1->next=NULL;
                delete temp2;
            }

            else
            {
                cnt--;
               node<int> *temp1=new node<int>;
                node<int> *temp2=new node<int>;
                temp2=head;
                int i;
                for(i=0; i<cnt; i++)
                {
                    temp1=temp2;

                    temp2=temp2->next;
                }
                temp1->next=temp2->next;
                temp2->next->previous=temp1;
                cout<<"delete from position : "<<cnt<<endl;


            }


    }

    void display_list()
    {
        node<int> *temp=new node<int>;
        temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<endl;
    }


};

int main()
{
    double_list<int> obj;
    int cnt_node=0;
    for(;;)
    {

        cout<<"menu"<<endl;
        cout<<"1 : create_node "<<endl;
        cout<<"2 : delete node"<<endl;
        cout<<"3 : display"<<endl;
        cout<<"4 : exit"<<endl;
        cout<<"Enter choice"<<endl;
        int n;
        cin>>n;
        if(n==1)
        {
            cout<<"Enter data"<<endl;
            int m;
            cin>>m;
            cnt_node++;
            //cout<<cnt_node<<endl;
            obj.create_node(m);
        }
        else if(n==2)
        {
            cout<<"delete a node"<<endl;
            int num;
            cout<<"Enter number"<<endl;
            cin>>num;
            obj.delete_node(num,cnt_node);
            cnt_node--;

        }
        else if(n==3)
        {
            cout<<"Print the list "<<endl;
            obj.display_list();
        }
        else if(n==4)
        {
            break;
        }

    }

    return 0;


}
