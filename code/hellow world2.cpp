#include<bits/stdc++.h>
using namespace std;
#include<graphics.h>
int ck,svid;
struct mbl
{
    long long int cnt=0;
    char name[100],email[100],mobile[100];
} str[2000];
void asgnS(char ch[],string s)
{
    for(int i=0; i<s.size(); i++)
    {
        ch[i]=s[i];
    }
    int i=s.size();
    ch[i]=NULL;
}
void tree()
{
    int n=ck,k;
    initwindow(1920,1280);
    outtextxy(800,0,"Name");
    int v=1000,sv;
    if(n%2==0)
    {
        k=1;
    }
    else
    {
        k=0;
        sv=(n/2)+1;
    }
    int rng,rng1;
    int dif1=200,dif2;
    v=1400;
    for(int i=1; i<=n; i++)
    {
        if(k==1)
        {
            if(i<=n/2)
            {
                if( i==svid)
                    setcolor(RED);
                else
                    setcolor(WHITE);
                line(800,15,dif1,200);
                outtextxy(dif1,200+8,str[i].name);
                dif2=dif1-50;
                if( i==svid)
                    setcolor(RED);
                else
                    setcolor(WHITE);
                line(dif1,200+30,dif2,400);
                outtextxy(dif2,400+8,str[i].email);
                dif2=dif1+20;
                if( i==svid)
                    setcolor(RED);
                else
                    setcolor(WHITE);
                line(dif1,200+30,dif2,300);
                outtextxy(dif2,300+8,str[i].mobile);
                dif1+=200;
            }
            else
            {
                //cout << v << endl;
                if( i==svid)
                    setcolor(RED);
                else
                    setcolor(WHITE);
                line(800,15,v,200);
                outtextxy((v),200+8,str[i].name);
                dif1=v;
                dif2=dif1-50;
                if( i==svid)
                    setcolor(RED);
                else
                    setcolor(WHITE);
                line(dif1,200+30,dif2,400);
                outtextxy(dif2,400+8,str[i].email);
                dif2=dif1+20;
                if( i==svid)
                    setcolor(RED);
                else
                    setcolor(WHITE);
                line(dif1,200+30,dif2,300);
                outtextxy(dif2,300+8,str[i].mobile);
                v-=200;
            }
        }
        else
        {
            if(i<=n/2)
            {
                if( i==svid)
                    setcolor(RED);
                else
                    setcolor(WHITE);
                line(800,15,dif1,200);
                outtextxy(dif1-1,200+8,str[i].name);
                dif2=dif1-50;
                if( i==svid)
                    setcolor(RED);
                else
                    setcolor(WHITE);
                line(dif1,200+30,dif2,400);

                outtextxy(dif2,400+8,str[i].email);
                dif2=dif1+20;
                if( i==svid)
                    setcolor(RED);
                else
                    setcolor(WHITE);
                line(dif1,200+30,dif2,300);
                outtextxy(dif2,300+8,str[i].mobile);
                //dif1+=200;
                dif1+=200;
            }
            else if(i==sv)
            {
                if( i==svid)
                    setcolor(RED);
                else
                    setcolor(WHITE);
                line(800,15,800,300);
                outtextxy(800,300+8,str[i].name);
                dif1=800;
                dif2=dif1-30;
                if( i==svid)
                    setcolor(RED);
                else
                    setcolor(WHITE);
                line(dif1,300+30,dif2,500);
                outtextxy(dif2,500+8,str[i].email);
                dif2=dif1+20;
                if( i==svid)
                    setcolor(RED);
                else
                    setcolor(WHITE);
                line(dif1,300+30,dif2,400);
                outtextxy(dif2,400+8,str[i].mobile);
            }
            else
            {
                if( i==svid)
                    setcolor(RED);
                else
                    setcolor(WHITE);
                line(800,15,v,200);
                outtextxy((v),200+8,str[i].name);
                dif1=v;
                dif2=dif1-50;
                if( i==svid)
                    setcolor(RED);
                else
                    setcolor(WHITE);
                line(dif1,200+30,dif2,400);
                outtextxy(dif2,400+8,str[i].email);
                dif2=dif1+20;
                if( i==svid)
                    setcolor(RED);
                else
                    setcolor(WHITE);
                line(dif1,200+30,dif2,300);
                outtextxy(dif2,300+8,str[i].mobile);
                v-=200;
            }
        }
    }
    getch();
    return;

}
void asgn(char ch1[],char ch2[])
{
    int ln1=strlen(ch2);
    for(int i=0; i<ln1; i++)
    {
        ch1[i]=ch2[i];
    }
    int i=ln1;
    ch1[i]=NULL;
}
int strchk(char ch1[],char ch2[])
{
    if(strlen(ch1)!=strlen(ch2))
    {
        return 1;
    }
    else
        for(int i=0; i<strlen(ch1); i++)
        {
            if(ch1[i]!=ch2[i])
            {
                return 1;
            }
        }
    return 0;
}
void space(int x,int y)
{
    for(int i=1; i<=20-x; i++)
    {
        cout << " ";
    }
}
void design(int x)
{
    for(int i=1; i<=x; i++)
    {
        cout << "=" ;
    }
    cout << endl;
}
void chkf(int id)
{
    int i=id;
    cout << "|<<" << i << ">>|" << endl;
    int dgn=strlen(str[i].name);
    cout << "|-->" << "Name :";
    space(6,0);
    cout << str[i].name  << endl;
    cout << "|";
    dgn=strlen(str[i].mobile);
    cout << "       \\" << endl;
    cout << "|";
    cout << "        Mobile Number :" ;
    space(4,0);
    cout <<  str[i].mobile  << endl;
    cout << "|";
    cout << "                      \\" << endl;
    cout << "|";
    dgn=strlen(str[i].email);
    cout << "                      Email : ";
    space(1,0);
    cout << str[i].email  << endl;
    cout << "|";
    cout << endl;
}
void add()
{
    char nam[100],eml[100],mbl[100];
    int f=0;
    getchar();
    cout << "Enter the name:\n";
    gets(nam);
    cout << "Enter the mobile number:\n";
    gets(mbl);
    int vv=strlen(mbl);
    if(vv>11 || vv < 11)
    {
        cout << "Invalid Number.\nPlease give a valid number.\n";
        cout << "Enter 1 for go to main menu.\nEnter 2 for repeat this option again\n";
        int id;
        cin >> id;
        if(id==1)
        {
            return;
        }
        else
        {
            add();
            return;
        }
    }
    if(mbl[0]=='0' && mbl[1]=='1' && (mbl[2]=='7' || mbl[2]=='5' || mbl[2]=='9' || mbl[2]=='3'))
    {
        cout << "|[ Mobile number verified ]|" << endl;
    }
    else
    {
        cout << "Invalid Number.\nPlease give a valid number.\n";
        cout << "Enter 1 for go to main menu\nEnter 2 for repeat this option again\n";
        int id;
        cin >> id;
        if(id==1)
        {
            return;
        }
        else
        {
            add();
            return;
        }
    }

    cout << "Enter the email:\n";
    gets(eml);
    vv=strlen(eml);
    int gk=0,ini;
    for(int i=0; i<vv; i++)
    {
        if(eml[i]=='@')
        {
            gk=1;
            ini=i+1;
            break;
        }
    }
    if(gk==0 || ini==vv)
    {
        cout << "Invalid Email.\nPlease give a valid Email.\n";
        cout << "Enter 1 for go to main menu\nEnter 2 for repeat this option again\n";
        int id;
        cin >> id;
        if(id==1)
        {
            return;
        }
        else
        {
            add();
            return;
        }
    }
    else
    {
        string ss;
        for(int i=ini; i<vv; i++)
        {
            ss.push_back(eml[i]);
        }
        if(ss=="gmail.com" || ss=="yahoo.com")
        {
            cout << "|[ Email verified ]|" << endl;
        }
        else
        {
            cout << "Invalid email.\nPlease give a valid email.\n";
            cout << "Enter 1 for go to main menu\nEnter 2 for repeat this option again\n";
            int id;
            cin >> id;
            if(id==1)
            {
                return;
            }
            else
            {
                add();
                return;
            }
        }
    }
    for(int i=1; i<=ck; i++)
    {
        int g=strchk(str[i].name,nam);
        if(g==0)
        {
            f=1;
            cout << "Sorry, this name is already use\n";
            cout << "Enter 1 for go to main menu\nEnter 2 for repeat this option again\n";
            int id;
            cin >> id;
            if(id==1)
            {
                return;
            }
            else
            {
                add();
                return;
            }
        }
    }
    if(f==0)
    {
        ++ck;
        asgn(str[ck].name,nam);
        asgn(str[ck].email,eml);
        asgn(str[ck].mobile,mbl);
    }
    f=0;
    cout << endl << endl;
}
void veiw()
{
    cout << "Your contacts are :\n";
    cout << endl;
    for(int i=1; i<=ck; i++)
    {
        chkf(i);
    }
}
void srch()
{
    string nam;
    cout << "Enter the Name of contact\n";
    getchar();
    getline(cin,nam);
    for(int i=1; i<=ck ; i++)
    {
        if(str[i].name==nam)
        {
            cout << "Contact found\nThe details of this contact are:" << endl;
            chkf(i);
            return;
        }
    }
    cout << "Sorry Not Found" << endl;
    cout << "Enter 1 for go to main menu\nEnter 2 for repeat this option again\n";
    int id;
    cin >> id;
    if(id==1)
    {
        return;
    }
    else
    {
        srch();
        return;
    }
    cout << endl ;
}
void edit()
{
    cout << "Enter the name of the contact that you want to edit" << endl;
    char nam[100];
    getchar();
    gets(nam);
    for(int i=1; i<=ck ; i++)
    {
        int g=strchk(str[i].name,nam);
        if(g==0)
        {
            cout << "Contact found" << endl;
            cout  << "Enter 1 for change the name"<< endl << "Enter 2 for change the mobile number" << endl << "Enter 3 for change the email" << endl;
            int id;
            cin >> id;
            if(id==1)
            {
                cout << "Enter the new name" << endl;
                getchar();
                nam[0]=NULL;
                gets(nam);
                asgn(str[i].name,nam);
            }
            else if(id==2)
            {
                char m[123];
                cout << "Enter the new mobile number" << endl;
                getchar();
                gets(m);
                asgn(str[i].mobile,m);
            }
            else
            {
                cout << "Enter the new email" << endl;
                getchar();
                nam[0]=NULL;
                gets(nam);
                asgn(str[i].email,nam);
            }
            cout << endl;
            return;
        }
    }
    cout << "Sorry , Contact Not Found" << endl;
    cout << "Enter 1 for go to main menu\nEnter 2 for repeat this option again\n";
    int id;
    cin >> id;
    if(id==1)
    {
        return;
    }
    else
    {
        edit();
        return;
    }
    cout << endl;

}
void delet()
{
    cout << "Enter the contact name that you want to delet" << endl;
    char nam[123];
    getchar();
    gets(nam);
    for(int i=1; i<=ck ; i++)
    {
        int g=strchk(str[i].name,nam);
        if(g==0)
        {
            cout << "Contact found\nThe details of this contact are:" << endl;
            cout << str[i].name << endl;
            cout << str[i].mobile << endl;
            cout << str[i].email << endl;
            for(int j=i+1; j<=ck; j++)
            {

                asgn(str[j-1].name,str[j].name);
                asgn(str[j-1].email,str[j].email);
                asgn(str[j-1].mobile,str[j].mobile);
            }
            ck--;
            cout << endl << endl ;
            return;
        }
    }
    cout << "Sorry , contact Not Found" << endl;
    cout << "Enter 1 for go to main menu\nEnter 2 for repeat this option again\n";
    int id;
    cin >> id;
    if(id==1)
    {
        return;
    }
    else
    {
        delet();
        return;
    }
    cout << endl ;

}
void dif_search()
{
    svid=0;
    string nam;
    cout << "Enter the Name of contact\n";
    getchar();
    getline(cin,nam);
    for(int i=1; i<=ck ; i++)
    {
        if(str[i].name==nam)
        {
            svid=i;
            tree();
            return;
        }
    }
    cout << "Sorry Not Found" << endl;
    cout << "Enter 1 for go to main menu\nEnter 2 for repeat this option again\n";
    int id;
    cin >> id;
    if(id==1)
    {
        return;
    }
    else
    {
        srch();
        return;
    }
    cout << endl ;
}
void save()
{
    ofstream fil;
    fil.open("Doc.txt");
    for(int i=1; i<=ck; i++)
    {
        fil<<str[i].name << endl;
        fil<<str[i].mobile << endl;
        fil<<str[i].email << endl;
    }
    cout << "|[ Congratulations, all of your data have been saved to your file.]|" << endl << endl;
}
int menu()
{
    int it;
    cout << "Enter 1 for add a new contact.\n";
    cout << "Enter 2 for view all contact information.\n";
    cout << "Enter 3 for search any contact information.\n";
    cout << "Enter 4 for edit any contact information.\n";
    cout << "Enter 5 for delete a contact information.\n";
    cout << "Enter 6 for view contact information in different way.\n";
    cout << "Enter 7 for search a name in different way.\n";
    cout << "Enter 8 for save data.\n";
    cout << "Enter 9 for exit.\n";
    scanf("%d",&it);
    if(it==1)
    {
        add();
    }
    else if(it==2)
    {
        veiw();
    }
    else if(it==3)
    {
        srch();
    }
    else if(it==4)
    {
        edit();
    }
    else if(it==5)
    {
        delet();
    }
    else if(it==6)
    {
        tree();
    }
    else if(it==7)
    {
        dif_search();
    }
    else if(it==8)
    {
        save();
    }
    return it;
}
int main()
{
    int i,j,k,e,r,chk=0,v=0;
    cout << "Welcome" << endl << endl;
    string sv;
    ifstream file("Doc.txt");
    int g=0;
    k=0;
    e=0;
    ck=0;
    while(getline(file,sv))
    {
        ++g;
        if(g==1)
            ck++;
        ++k;
        if(g==1)
        {
            asgnS(str[ck].name,sv);
        }
        else if(g==2)
        {
            asgnS(str[ck].mobile,sv);
        }
        else
        {
            asgnS(str[ck].email,sv);

        }
        if(g==3)
        {
            e=1;
            g=0;
        }
    }
    file.close();
    if(e==0)
        ck=0;
    do
    {

        v = menu();

    }
    while(v!=9);


}
