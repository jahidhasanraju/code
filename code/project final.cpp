#include<bits/stdc++.h>
using namespace std;
#include<graphics.h>
int ck,svid;
struct mbl
{
    long long int cnt=0;
    char name[100],email[100],mobile[100],relation[100];
} str[2000];

void asgnS(char ch[],string s)
{
    for(int i=0; i<s.size(); i++)
    {
        ch[i]=s[i];
    }
    int i=s.size();
    ch[i]='\0';
}

///assign function....

void asgn(char ch1[],char ch2[])
{
    int ln1=strlen(ch2);
    for(int i=0; i<ln1; i++)
    {
        ch1[i]=ch2[i];
    }
    int i=ln1;
    ch1[i]='\0';
}

///textbox function....

void textbox(int i)
{

    string ss=str[i].name;
    if(ss[0]=='A'||ss[0]=='a'||ss[0]=='B'||ss[0]=='b')
    {
        initwindow(1000,700);
        settextstyle(8,HORIZ_DIR,5);
        outtextxy(230,70,str[i].name);
        //outtextxy(50,200,"brother");
        setcolor(BLUE);
        rectangle(90,120,850,450);
        setfillstyle(SOLID_FILL,BLUE);
        floodfill(250,250,BLUE);
        outtextxy(330,130,str[i].relation);
        outtextxy(280,210,str[i].mobile);
        outtextxy(110,290,str[i].email);
        getch();
    }
    else if(ss[0]=='C'||ss[0]=='c'||ss[0]=='D'||ss[0]=='d')
    {
        initwindow(1000,700);
        settextstyle(8,HORIZ_DIR,5);
        outtextxy(230,70,str[i].name);
        //outtextxy(50,200,"brother");
        setcolor(BROWN);
        rectangle(90,120,850,450);
        setfillstyle(SOLID_FILL,BROWN);
        floodfill(250,250,BROWN);
        outtextxy(330,130,str[i].relation);
        outtextxy(280,210,str[i].mobile);
        outtextxy(110,290,str[i].email);
        getch();
    }
    else if(ss[0]=='E'||ss[0]=='e'||ss[0]=='F'||ss[0]=='f')
    {
        initwindow(1000,700);
        settextstyle(8,HORIZ_DIR,5);
        outtextxy(230,70,str[i].name);
        //outtextxy(50,200,"brother");
        setcolor(GREEN);
        rectangle(90,120,850,450);
        setfillstyle(SOLID_FILL,GREEN);
        floodfill(250,250,GREEN);
        outtextxy(330,130,str[i].relation);
        outtextxy(280,210,str[i].mobile);
        outtextxy(110,290,str[i].email);
        getch();
    }
    else if(ss[0]=='G'||ss[0]=='g'||ss[0]=='H'||ss[0]=='h')
    {
        initwindow(1000,700);
        settextstyle(8,HORIZ_DIR,5);
        outtextxy(230,70,str[i].name);
        //outtextxy(50,200,"brother");
        setcolor(CYAN);
        rectangle(90,120,850,450);
        setfillstyle(SOLID_FILL,CYAN);
        floodfill(250,250,CYAN);
        outtextxy(330,130,str[i].relation);
        outtextxy(280,210,str[i].mobile);
        outtextxy(110,290,str[i].email);
        getch();
    }
    else if(ss[0]=='I'||ss[0]=='i'||ss[0]=='J'||ss[0]=='j')
    {
        initwindow(1000,700);
        settextstyle(8,HORIZ_DIR,5);
        outtextxy(230,70,str[i].name);
        //outtextxy(50,200,"brother");
        setcolor(YELLOW);
        rectangle(90,120,850,450);
        setfillstyle(SOLID_FILL,YELLOW);
        floodfill(250,250,YELLOW);
        outtextxy(330,130,str[i].relation);
        outtextxy(280,210,str[i].mobile);
        outtextxy(110,290,str[i].email);
        getch();
    }
    else if(ss[0]=='K'||ss[0]=='k'||ss[0]=='L'||ss[0]=='l')
    {
        initwindow(1000,700);
        settextstyle(8,HORIZ_DIR,5);
        outtextxy(230,70,str[i].name);
        //outtextxy(50,200,"brother");
        setcolor(MAGENTA);
        rectangle(90,120,850,450);
        setfillstyle(SOLID_FILL,MAGENTA);
        floodfill(250,250,MAGENTA);
        outtextxy(330,130,str[i].relation);
        outtextxy(280,210,str[i].mobile);
        outtextxy(110,290,str[i].email);
        getch();
    }
    else if(ss[0]=='M'||ss[0]=='m'||ss[0]=='N'||ss[0]=='n')
    {
        initwindow(1000,700);
        settextstyle(8,HORIZ_DIR,5);
        outtextxy(230,70,str[i].name);
        //outtextxy(50,200,"brother");
        setcolor(LIGHTGREEN);
        rectangle(90,120,850,450);
        setfillstyle(SOLID_FILL,LIGHTGREEN);
        floodfill(250,250,LIGHTGREEN);
        outtextxy(330,130,str[i].relation);
        outtextxy(280,210,str[i].mobile);
        outtextxy(110,290,str[i].email);
        getch();
    }
    else if(ss[0]=='O'||ss[0]=='o'||ss[0]=='p'||ss[0]=='P')
    {
        initwindow(1000,700);
        settextstyle(8,HORIZ_DIR,5);
        outtextxy(230,70,str[i].name);
        //outtextxy(50,200,"brother");
        setcolor(BROWN);
        rectangle(90,120,850,450);
        setfillstyle(SOLID_FILL,BROWN);
        floodfill(250,250,BROWN);
        outtextxy(330,130,str[i].relation);
        outtextxy(280,210,str[i].mobile);
        outtextxy(110,290,str[i].email);
        getch();
    }
    else if(ss[0]=='Q'||ss[0]=='q'||ss[0]=='R'||ss[0]=='r')
    {
        initwindow(1000,700);
        settextstyle(8,HORIZ_DIR,5);
        outtextxy(230,70,str[i].name);
        //outtextxy(50,200,"brother");
        setcolor(LIGHTGRAY);
        rectangle(90,120,850,450);
        setfillstyle(SOLID_FILL,LIGHTGRAY);
        floodfill(250,250,LIGHTGRAY);
        outtextxy(330,130,str[i].relation);
        outtextxy(280,210,str[i].mobile);
        outtextxy(110,290,str[i].email);
        getch();
    }
    else if(ss[0]=='s'||ss[0]=='S'||ss[0]=='T'||ss[0]=='T')
    {
        initwindow(1000,700);
        settextstyle(8,HORIZ_DIR,5);
        outtextxy(230,70,str[i].name);
        //outtextxy(50,200,"brother");
        setcolor(RED);
        rectangle(90,120,850,450);
        setfillstyle(SOLID_FILL,RED);
        floodfill(250,250,RED);
        outtextxy(330,130,str[i].relation);
        outtextxy(280,210,str[i].mobile);
        outtextxy(110,290,str[i].email);
        getch();
    }
    else if(ss[0]=='U'||ss[0]=='u'||ss[0]=='V'||ss[0]=='v')
    {
        initwindow(1000,700);
        settextstyle(8,HORIZ_DIR,5);
        outtextxy(230,70,str[i].name);
        //outtextxy(50,200,"brother");
        setcolor(LIGHTBLUE);
        rectangle(90,120,850,450);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        floodfill(250,250,LIGHTBLUE);
        outtextxy(330,130,str[i].relation);
        outtextxy(280,210,str[i].mobile);
        outtextxy(110,290,str[i].email);
        getch();
    }
    else if(ss[0]=='W'||ss[0]=='w'||ss[0]=='X'||ss[0]=='x')
    {
        initwindow(1000,700);
        settextstyle(8,HORIZ_DIR,5);
        outtextxy(230,70,str[i].name);
        //outtextxy(50,200,"brother");
        setcolor(DARKGRAY);
        rectangle(90,120,850,450);
        setfillstyle(SOLID_FILL,DARKGRAY);
        floodfill(250,250,DARKGRAY);
        outtextxy(330,130,str[i].relation);
        outtextxy(280,210,str[i].mobile);
        outtextxy(110,290,str[i].email);
        getch();
    }
    else if(ss[0]=='Y'||ss[0]=='y'||ss[0]=='z'||ss[0]=='z')
    {
        initwindow(1000,700);
        settextstyle(8,HORIZ_DIR,5);
        outtextxy(230,70,str[i].name);
        //outtextxy(50,200,"brother");
        setcolor(LIGHTMAGENTA);
        rectangle(90,120,850,450);
        setfillstyle(SOLID_FILL,LIGHTMAGENTA);
        floodfill(250,250,LIGHTMAGENTA);
        outtextxy(330,130,str[i].relation);
        outtextxy(280,210,str[i].mobile);
        outtextxy(110,290,str[i].email);
        getch();
    }
    return;
}


///check(chk) function.....

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

///space function>>>

void space(int x,int y)
{
    for(int i=1; i<=20-x; i++)
    {
        cout <<" ";
    }
}

///chkf function>>>>

void chkf(int id)
{
    int i=id;
    cout << "|<<" << i << ">>|" << endl;
    int dgn=strlen(str[i].name);
    cout << "|-->" << "Name :";
    space(6,0);
    cout << str[i].name  << endl;
    cout << "|";
    dgn=strlen(str[i].relation);
    cout<<"     \\"<<endl;
    cout<<"|";
    cout<<"      group:";
    space(-6,0);
    cout<<str[i].relation<<endl;
    cout<< "|";
    dgn=strlen(str[i].mobile);
    cout << "           \\" << endl;
    cout << "|";
    cout << "            Mobile Number :" ;
    space(4,0);
    cout <<  str[i].mobile  << endl;
    cout << "|";
    cout << "                         \\" << endl;
    cout << "|";
    dgn=strlen(str[i].email);
    cout << "                          Email : ";
    space(1,0);
    cout << str[i].email  << endl;
    cout << "|";
    cout << endl<<endl;
}

/// add function.........

void add()
{
    char nam[100],eml[100],mbl[100],relation1[100];
    int f=0;
    getchar();
    system("cls");
    system("color 2");
    space(-15,0);
    cout<<"''''''''''''''''''''''''''''"<<endl;
    space(-15,0);
    cout<<"'     ...Enter Info...     '"<<endl;
    space(-15,0);
    cout<<"'                          '"<<endl;
    space(-15,0);
    cout<<"''''''''''''''''''''''''''''"<<endl;
    cout << "Enter the name:\n";
    gets(nam);
    cout<<endl;
    cout<<"Enter the group:\n";
    gets(relation1);
    cout<<endl;
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
    if(mbl[0]=='0' && mbl[1]=='1' && (mbl[2]=='7' || mbl[2]=='5' || mbl[2]=='9' || mbl[2]=='3'||mbl[2]=='8'))
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
    cout<<endl;
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
        int rltn=strchk(str[i].relation,relation1);
        if(g==0&&rltn==0)
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
        asgn(str[ck].relation,relation1);
        asgn(str[ck].email,eml);
        asgn(str[ck].mobile,mbl);
    }
    f=0;
    cout << endl << endl;
}

///2.view function

void veiw()
{
    system("cls");
    system("color 2");
    space(-15,0);
    cout<<"'''''''''''''''''''''''''''''''''"<<endl;
    space(-15,0);
    cout<<"'    ...Your contact are...     '"<<endl;
    space(-15,0);
    cout<<"'                               '"<<endl;
    space(-15,0);
    cout<<"'''''''''''''''''''''''''''''''''"<<endl;
    cout << endl;
    for(int i=1; i<=ck; i++)
    {
        chkf(i);
    }
    cout<<endl;
    //cout<<"press any key to continue:"<<endl;
    getchar();
}
///3.view contact of specific group
void contact_of_group()
{
    system("cls");
    system("color B");
    space(-15,0);
    cout<<"''''''''''''''''''''''''''''"<<endl;
    space(-15,0);
    cout<<"'   ...Group contact..     '"<<endl;
    space(-15,0);
    cout<<"'                          '"<<endl;
    space(-15,0);
    cout<<"''''''''''''''''''''''''''''"<<endl;
    string relation1;
    int check=false;
    cout<<"Enter group name:"<<endl;
    getchar();
    getline(cin,relation1);
    for(int i=1; i<=ck ; i++)
    {
        if(str[i].relation==relation1)
        {
            check=true;
            chkf(i);
        }
    }
    if(check==false)
    {
        cout<<"Sorry,there are no contact in "<<relation1<<"group"<<endl;
        cout << "Enter 1 for go to main menu\nEnter 2 for repeat this option again\n";
        int id;
        cin >> id;
        if(id==1)
        {
            return;
        }
        else
        {
            contact_of_group();
            return;
        }

    }
    cout<<endl;
}
///3.search function.....

void srch()
{
    system("cls");
    system("color 5");
    space(-15,0);
    cout<<"''''''''''''''''''''''''''''"<<endl;
    space(-15,0);
    cout<<"'      ....Search....      '"<<endl;
    space(-15,0);
    cout<<"'                          '"<<endl;
    space(-15,0);
    cout<<"''''''''''''''''''''''''''''"<<endl;
    cout<<endl;
    string nam,relation1;
    cout << "Enter the Name of contact\n";
    getchar();
    getline(cin,nam);
    cout<<"Enter the group"<<endl;
    // getchar();
    getline(cin,relation1);
    for(int i=1; i<=ck ; i++)
    {
        if(str[i].name==nam && str[i].relation==relation1)
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

///4.edit function....
void edit()
{
    system("cls");
    system("color 1");
    space(-15,0);
    cout<<"''''''''''''''''''''''''''''"<<endl;
    space(-15,0);
    cout<<"'       ....Edit....       '"<<endl;
    space(-15,0);
    cout<<"'                          '"<<endl;
    space(-15,0);
    cout<<"''''''''''''''''''''''''''''"<<endl;
    cout<<endl;
    cout << "Enter the name:" << endl;
    char nam[100];
    char relation1[100];
    getchar();
    gets(nam);
    cout<<"Enter the group:"<<endl;
    //getchar();
    gets(relation1);
    for(int i=1; i<=ck ; i++)
    {
        int g=strchk(str[i].name,nam);
        int rltn=strchk(str[i].relation,relation1);
        if(g==0&&rltn==0)
        {
            cout << "Contact found" << endl;
            cout  << "Enter 1 for change the name"<< endl;
            cout<<"Enter 2 for change the group"<<endl;
            cout << "Enter 3 for change the mobile number" << endl;
            cout << "Enter 4 for change the email" << endl;
            int id;
            cin >> id;
            if(id==1)
            {
                cout << "Enter the new name" << endl;
                getchar();
                nam[0]='\0';
                gets(nam);
                asgn(str[i].name,nam);
            }
            else if(id==2)
            {
                cout << "Enter the group" << endl;
                getchar();
                nam[0]='\0';
                gets(nam);
                asgn(str[i].relation,nam);
            }
            else if(id==3)
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
                nam[0]='\0';
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

///5.delete function....

void delet()
{
    system("cls");
    system("color E");
    space(-15,0);
    cout<<"''''''''''''''''''''''''''''"<<endl;
    space(-15,0);
    cout<<"'       ....Delete....     '"<<endl;
    space(-15,0);
    cout<<"'                          '"<<endl;
    space(-15,0);
    cout<<"''''''''''''''''''''''''''''"<<endl;
    cout<<endl;
    cout << "Enter the contact name:" << endl;
    char nam[123];
    getchar();
    gets(nam);
    cout<<"Enter the relation with him/her"<<endl;
    char relation1[120];
    //getchar();
    gets(relation1);
    for(int i=1; i<=ck ; i++)
    {
        int g=strchk(str[i].name,nam);
        int rltn=strchk(str[i].relation,relation1);
        if(g==0 && rltn==0)
        {
            cout << "Contact found\nThe details of this contact are:" << endl;
            cout << str[i].name << endl;
            cout<<str[i].relation<<endl;
            cout << str[i].mobile << endl;
            cout << str[i].email << endl;
            for(int j=i+1; j<=ck; j++)
            {

                asgn(str[j-1].name,str[j].name);
                asgn(str[j-1].relation,str[j].relation);
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
///difrent search...

void dif_search()
{
    //svid=0;
    system("cls");
    space(-15,0);
    cout<<"''''''''''''''''''''''''''''"<<endl;
    space(-15,0);
    cout<<"'     ...Enter Info...     '"<<endl;
    space(-15,0);
    cout<<"'                          '"<<endl;
    space(-15,0);
    cout<<"''''''''''''''''''''''''''''"<<endl;
    cout<<endl;
    string nam,relation1;
    cout << "Enter the Name of contact\n";
    getchar();
    getline(cin,nam);
    cout<<"Enter the group"<<endl;
    // getchar();
    getline(cin,relation1);
    for(int i=1; i<=ck ; i++)
    {
        if(str[i].name==nam&&str[i].relation==relation1)
        {
            //svid=i;
            textbox(i);
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
        dif_search();
        return;
    }
    cout << endl ;
}

///save function....
void save()
{
    ofstream fil;
    fil.open("Doc.txt");
    for(int i=1; i<=ck; i++)
    {
        fil<<str[i].name << endl;
        fil<<str[i].relation<<endl;
        fil<<str[i].mobile << endl;
        fil<<str[i].email << endl;
    }
    cout << "|[ Congratulations, all of your data have been saved to your file.]|" << endl << endl;
    getchar();
}

/// menu function........

int menu()
{
    int it;
    system("color 4");
    space(-15,0);
    cout<<"''''''''''''''''''''''''''''"<<endl;
    space(-15,0);
    cout<<"'       ....Menu....       '"<<endl;
    space(-15,0);
    cout<<"'                          '"<<endl;
    space(-15,0);
    cout<<"''''''''''''''''''''''''''''"<<endl;
    cout<<endl;
    cout << "Enter 1 for add a new contact.\n"<<endl;
    cout << "Enter 2 for view all contact information.\n"<<endl;
    cout<<"Enter 3 for view contacts of a group.\n"<<endl;
    cout << "Enter 4 for search any contact information.\n"<<endl;
    cout << "Enter 5 for edit any contact information.\n"<<endl;
    cout << "Enter 6 for delete a contact information.\n"<<endl;
    cout << "Enter 7 for save data.\n"<<endl;
    cout << "Enter 8 for search a name with graphics.\n"<<endl;
    cout << "Enter 9 for exit.\n"<<endl;
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
        contact_of_group();
    }
    else if(it==4)
    {
        srch();
    }
    else if(it==5)
    {
        edit();
    }
    else if(it==6)
    {
        delet();
    }
    else if(it==7)
    {
         save();
    }
    else if(it==8)
    {
        dif_search();
    }
    return it;
}

///main function.........

int main()
{
    int i,j,k,e,r,chk=0,v=0;
    system("color 6");
    space(-15,0);
    cout<<"''''''''''''''''''''''''''''"<<endl;
    space(-15,0);
    cout<<"'      ....Welcome....     '"<<endl;
    space(-15,0);
    cout<<"'                          '"<<endl;
    space(-15,0);
    cout<<"''''''''''''''''''''''''''''"<<endl;
    space(-15,0);
    cout<<"''''''''''''''''''''''''''''"<<endl;
    space(-15,0);
    cout<<"'                          '"<<endl;
    space(-15,0);
    cout<<"'   Md. Jahid Hasan Raju   '"<<endl;
    space(-15,0);
    cout<<"'                          '"<<endl;
    space(-15,0);
    cout<<"'        ID:CE19017        '"<<endl;
    space(-15,0);
    cout<<"''''''''''''''''''''''''''''"<<endl;
    cout<<endl<<endl;
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

        cout<<"press any key to continue:"<<endl;
        getchar();
        system("cls");
        v = menu();
    }
    while(v!=9);


}
