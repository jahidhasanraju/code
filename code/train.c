#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int no_of_seat=100;
int cancel_set;
int PNR=389328;
typedef struct
{
    char name[50];
    int train_num;
    int num_of_seats;
} pd;

float charge(int train_num,int num_of_seats,int start,int destination)
{
    if (train_num==701)
    {
        if(start ==1 && destination ==2)
        {
            return (385.0*num_of_seats);
        }
        else if(start==2 && destination ==3)
        {
            return (15.0*num_of_seats);
        }
        else
        {
            return (400.0*num_of_seats);
        }
    }
    if (train_num==702)
    {
        if(start ==1 && destination ==2)
        {
            return (15.0*num_of_seats);
        }
        else if(start==2 && destination ==3)
        {
            return (385.0*num_of_seats);
        }
        else
        {
            return (400.0*num_of_seats);
        }
    }
    if (train_num==703)
    {
        if(start==1 && destination==2)
        {
            return (15.0*num_of_seats);
        }
        else if(start==1 && destination==3)
        {
            return (445.0*num_of_seats);
        }
        else if(start==1 && destination==4)
        {
            return (485.0*num_of_seats);
        }
        else if(start==1 && destination==5)
        {
            return (546.0*num_of_seats);
        }
        else if(start==1 && destination==6)
        {
            return (570.0*num_of_seats);
        }
        else if(start==2 && destination==3)
        {
            return (430.0*num_of_seats);
        }
        else if(start==2 && destination==4)
        {
            return (470.0*num_of_seats);
        }
        else if(start==2 && destination==5)
        {
            return (525.0*num_of_seats);
        }
        else if(start==2 && destination==6)
        {
            return (555.0*num_of_seats);
        }
        else if(start==3 && destination==4)
        {
            return (40.0*num_of_seats);
        }
        else if(start==3 && destination==5)
        {
            return (95.0*num_of_seats);
        }
        else if(start==3 && destination==6)
        {
            return (125.0*num_of_seats);
        }
        else if(start==4 && destination==5)
        {
            return (85.0*num_of_seats);
        }
        else if(start==4 && destination ==6)
        {
            return (65.0*num_of_seats);
        }
        else if(start==5 && destination==6)
        {
            return (30.0*num_of_seats);
        }
    }
    if (train_num==704)
    {
        if(start==1 && destination==2)
        {
            return (30.0*num_of_seats);
        }
        else if(start==1 && destination==3)
        {
            return (85.0*num_of_seats);
        }
        else if(start==1 && destination==4)
        {
            return (125.0*num_of_seats);
        }
        else if(start==1 && destination==5)
        {
            return (465.0*num_of_seats);
        }
        else if(start==1 && destination==6)
        {
            return (570.0*num_of_seats);
        }
        else if(start==2 && destination==3)
        {
            return (55.0*num_of_seats);
        }
        else if(start==2 && destination==4)
        {
            return (85.0*num_of_seats);
        }
        else if(start==2 && destination==5)
        {
            return (525.0*num_of_seats);
        }
        else if(start==2 && destination==6)
        {
            return (540.0*num_of_seats);
        }
        else if(start==3 && destination==4)
        {
            return (40.0*num_of_seats);
        }
        else if(start==3 && destination==5)
        {
            return (470.0*num_of_seats);
        }
        else if(start==3 && destination==6)
        {
            return (485.0*num_of_seats);
        }
        else if(start==4 && destination==5)
        {
            return (430.0*num_of_seats);
        }
        else if(start==4 && destination ==6)
        {
            return (445.0*num_of_seats);
        }
        else if(start==5 && destination==6)
        {
            return (15.0*num_of_seats);
        }
    }
    if (train_num==705)
    {
        if(start==1 && destination==2)
        {
            return (15.0*num_of_seats);
        }
        else if(start==1 && destination==3)
        {
            return (120.0*num_of_seats);
        }
        else if(start==1 && destination==4)
        {
            return (160.0*num_of_seats);
        }
        else if(start==1 && destination==5)
        {
            return (210.0*num_of_seats);
        }
        else if(start==1 && destination==6)
        {
            return (245.0*num_of_seats);
        }
        else if(start==1 && destination==7)
        {
            return (260.0*num_of_seats);
        }
        else if(start==2 && destination==3)
        {
            return (105.0*num_of_seats);
        }
        else if(start==2 && destination==4)
        {
            return (145.0*num_of_seats);
        }
        else if(start==2 && destination==5)
        {
            return (195.0*num_of_seats);
        }
        else if(start==2 && destination==6)
        {
            return (230.0*num_of_seats);
        }
        else if(start==2 && destination==7)
        {
            return (245.0*num_of_seats);
        }
        else if(start==3 && destination==4)
        {
            return (40.0*num_of_seats);
        }
        else if(start==3 && destination==5)
        {
            return (90.0*num_of_seats);
        }
        else if(start==3 && destination==6)
        {
            return (125.0*num_of_seats);
        }
        else if(start==3 && destination==7)
        {
            return (140.0*num_of_seats);
        }
        else if(start==4 && destination==5)
        {
            return (50.0*num_of_seats);
        }
        else if(start==4 && destination ==6)
        {
            return (85.0*num_of_seats);
        }
        else if(start==4 && destination==7)
        {
            return (100.0*num_of_seats);
        }
        else if(start==5 && destination==6)
        {
            return (35.0*num_of_seats);
        }
        else if(start==5 && destination==7)
        {
            return (50.0*num_of_seats);
        }
        else if(start==6 && destination==7)
        {
            return (15.0*num_of_seats);
        }
    }
    if (train_num==706)
    {
        if(start==1 && destination==2)
        {
            return (15.0*num_of_seats);
        }
        else if(start==1 && destination==3)
        {
            return (50.0*num_of_seats);
        }
        else if(start==1 && destination==4)
        {
            return (100.0*num_of_seats);
        }
        else if(start==1 && destination==5)
        {
            return (140.0*num_of_seats);
        }
        else if(start==1 && destination==6)
        {
            return (245.0*num_of_seats);
        }
        else if(start==1 && destination==7)
        {
            return (260.0*num_of_seats);
        }
        else if(start==2 && destination==3)
        {
            return (35.0*num_of_seats);
        }
        else if(start==2 && destination==4)
        {
            return (85.0*num_of_seats);
        }
        else if(start==2 && destination==5)
        {
            return (125.0*num_of_seats);
        }
        else if(start==2 && destination==6)
        {
            return (230.0*num_of_seats);
        }
        else if(start==2 && destination==7)
        {
            return (245.0*num_of_seats);
        }
        else if(start==3 && destination==4)
        {
            return (50.0*num_of_seats);
        }
        else if(start==3 && destination==5)
        {
            return (90.0*num_of_seats);
        }
        else if(start==3 && destination==6)
        {
            return (195.0*num_of_seats);
        }
        else if(start==3 && destination==7)
        {
            return (210.0*num_of_seats);
        }
        else if(start==4 && destination==5)
        {
            return (40.0*num_of_seats);
        }
        else if(start==4 && destination ==6)
        {
            return (145.0*num_of_seats);
        }
        else if(start==4 && destination==7)
        {
            return (160.0*num_of_seats);
        }
        else if(start==5 && destination==6)
        {
            return (105.0*num_of_seats);
        }
        else if(start==5 && destination==7)
        {
            return (120.0*num_of_seats);
        }
        else if(start==6 && destination==7)
        {
            return (15.0*num_of_seats);
        }
    }
    if (train_num==707)
    {
        if(start==1 && destination==2)
        {
            return (15.0*num_of_seats);
        }
        else if(start==1 && destination==3)
        {
            return (395.0*num_of_seats);
        }
        else if(start==1 && destination==4)
        {
            return (425.0*num_of_seats);
        }
        else if(start==2 && destination==3)
        {
            return (380.0*num_of_seats);
        }
        else if(start==2 && destination==4)
        {
            return (410.0*num_of_seats);
        }
        else if(start==3 && destination==4)
        {
            return (30.0*num_of_seats);
        }
    }
    if (train_num==708)
    {
        if(start==1 && destination==2)
        {
            return (30.0*num_of_seats);
        }
        else if(start==1 && destination==3)
        {
            return (410.0*num_of_seats);
        }
        else if(start==1 && destination==4)
        {
            return (425.0*num_of_seats);
        }
        else if(start==2 && destination==3)
        {
            return (380.0*num_of_seats);
        }
        else if(start==2 && destination==4)
        {
            return (395.0*num_of_seats);
        }
        else if(start==3 && destination==4)
        {
            return (15.0*num_of_seats);
        }
    }
    if (train_num==709)
    {
        if(start==1 && destination==2)
        {
            return (15.0*num_of_seats);
        }
        else if(start==1 && destination==3)
        {
            return (70.0*num_of_seats);
        }
        else if(start==1 && destination==4)
        {
            return (135.0*num_of_seats);
        }
        else if(start==1 && destination==5)
        {
            return (160.0*num_of_seats);
        }
        else if(start==1 && destination==6)
        {
            return (260.0*num_of_seats);
        }
        else if(start==2 && destination==3)
        {
            return (55.0*num_of_seats);
        }
        else if(start==2 && destination==4)
        {
            return (120.0*num_of_seats);
        }
        else if(start==2 && destination==5)
        {
            return (145.0*num_of_seats);
        }
        else if(start==2 && destination==6)
        {
            return (245.0*num_of_seats);
        }
        else if(start==3 && destination==4)
        {
            return (65.0*num_of_seats);
        }
        else if(start==3 && destination==5)
        {
            return (90.0*num_of_seats);
        }
        else if(start==3 && destination==6)
        {
            return (190.0*num_of_seats);
        }
        else if(start==4 && destination==5)
        {
            return (25.0*num_of_seats);
        }
        else if(start==4 && destination==6)
        {
            return (125.0*num_of_seats);
        }
        else if(start==5 && destination==6)
        {
            return (100.0*num_of_seats);
        }
    }
    if (train_num==710)
    {
        if(start==1 && destination==2)
        {
            return (100.0*num_of_seats);
        }
        else if(start==1 && destination==3)
        {
            return (125.0*num_of_seats);
        }
        else if(start==1 && destination==4)
        {
            return (190.0*num_of_seats);
        }
        else if(start==1 && destination==5)
        {
            return (245.0*num_of_seats);
        }
        else if(start==1 && destination==6)
        {
            return (260.0*num_of_seats);
        }
        else if(start==2 && destination==3)
        {
            return (25.0*num_of_seats);
        }
        else if(start==2 && destination==4)
        {
            return (90.0*num_of_seats);
        }
        else if(start==2 && destination==5)
        {
            return (145.0*num_of_seats);
        }
        else if(start==2 && destination==6)
        {
            return (160.0*num_of_seats);
        }
        else if(start==3 && destination==4)
        {
            return (65.0*num_of_seats);
        }
        else if(start==3 && destination==5)
        {
            return (120.0*num_of_seats);
        }
        else if(start==3 && destination==6)
        {
            return (135.0*num_of_seats);
        }
        else if(start==4 && destination==5)
        {
            return (55.0*num_of_seats);
        }
        else if(start==4 && destination==6)
        {
            return (70.0*num_of_seats);
        }
        else if(start==5 && destination==6)
        {
            return (15.0*num_of_seats);
        }
    }
}


void specifictrain(int train_num,int start,int destination)
{

    if (train_num==701)
    {
        printf("\nTrain:\t\t\tSubarna Express");
        if(start==1 && destination==2)
        {
            printf("\nDestination:\t\tChittagong to Biman_Bandor");
            printf("\nDeparture:\t\t07:00");
        }
        else if(start==2 && destination==3)
        {
            printf("\nDestination:\t\tBiman_Bandor to Dhaka");
            printf("\nDeparture:\t\t11.39");
        }
        else
        {
            printf("\nDestination:\t\tChittagong to Dhaka");
            printf("\nDeparture:\t\t07:00 ");
        }
    }
    if (train_num==702)
    {
        printf("\nTrain:\t\t\tSubarna Express");
        if(start==1 && destination==2)
        {
            printf("\nDestination:\t\tDhaka to Biman_Bandor");
            printf("\nDeparture:\t\t15:00");
        }
        else if(start==2 && destination==3)
        {
            printf("\nDestination:\t\tBiman_Bandor to Chittagong");
            printf("\nDeparture:\t\t15:25");
        }
        else
        {
            printf("\nDestination:\t\tDhaka to Chittagong");
            printf("\nDeparture:\t\t15:00 ");
        }
    }
    if (train_num==703)
    {
        printf("\nTrain:\t\t\tPanchagar Express");
        if(start==1 && destination==2)
        {
            printf("\nDestination:\t\tDhaka To Biman_Bandar");
            printf("\nDeparture:\t\t00:10");
        }
        else if(start==1 && destination==3)
        {
            printf("\nDestination:\t\tDhaka To Parbatipur");
            printf("\nDeparture:\t\t00:10");
        }
        else if(start==1 && destination==4)
        {
            printf("\nDestination:\t\tDhaka To Dinajpur");
            printf("\nDeparture:\t\t00:10");
        }
        else if(start==1 && destination==5)
        {
            printf("\nDestination:\t\tDhaka To Thakurgone_Road");
            printf("\nDeparture:\t\t00:10");
        }
        else if(start==1 && destination==6)
        {
            printf("\nDestination:\t\tDhaka To Panchagar");
            printf("\nDeparture:\t\t00:10");
        }
        else if(start==2 && destination==3)
        {
            printf("\nDestination:\t\tBiman_bandar To Parbatipur");
            printf("\nDeparture:\t\t00:42");
        }
        else if(start==3 && destination==4)
        {
            printf("\nDestination:\t\tBiman_bandar To Dinajpur");
            printf("\nDeparture:\t\t00:42");
        }
        else if(start==3 && destination==5)
        {
            printf("\nDestination:\t\tBiman_bandar To Thakurgone_Road");
            printf("\nDeparture:\t\t00:42");
        }
        else if(start==3 && destination==6)
        {
            printf("\nDestination:\t\tBiman_bandar To Panchagar");
            printf("\nDeparture:\t\t00:42");
        }
        else if(start==3 && destination==4)
        {
            printf("\nDestination:\t\tParbatipur To Dinajpur");
            printf("\nDeparture:\t\t07:00");
        }
        else if(start==3 && destination==5)
        {
            printf("\nDestination:\t\tParbatipur To Thakurgone_Road");
            printf("\nDeparture:\t\t07:00");
        }
        else if(start==3 && destination==6)
        {
            printf("\nDestination:\t\tParbatipur To Panchagar");
            printf("\nDeparture:\t\t07:00");
        }
        else if(start==4 && destination==5)
        {
            printf("\nDestination:\t\tDinajpur To Thakurgone_Road");
            printf("\nDeparture:\t\t07:37");
        }
        else if(start==4 && destination ==6)
        {
            printf("\nDestination:\t\tDinajpur To Panchagar");
            printf("\nDeparture:\t\t07:37");
        }
        else if(start==5 && destination==6)
        {
            printf("\nDestination:\t\tThakurgone_Road To Panchagar");
            printf("\nDeparture:\t\t08:55");
        }
    }
    if (train_num==704)
    {
        printf("\nTrain:\t\t\tPanchagar Express");
        if(start==1 && destination==2)
        {
            printf("\nDestination:\t\tPanchagar To Thakurgone_Road");
            printf("\nDeparture:\t\t13:53");
        }
        else if(start==1 && destination==3)
        {
            printf("\nDestination:\t\tPanchagar To Dinajpur");
            printf("\nDeparture:\t\t13:53");
        }
        else if(start==1 && destination==4)
        {
            printf("\nDestination:\t\tPanchagar To Parbatipur");
            printf("\nDeparture:\t\t13:53");
        }
        else if(start==1 && destination==5)
        {
            printf("\nDestination:\t\tPanchagar To Biman_Bandar");
            printf("\nDeparture:\t\t13:53");
        }
        else if(start==1 && destination==6)
        {
            printf("\nDestination:\t\tPanchagar To Dhaka");
            printf("\nDeparture:\t\t13:53");
        }
        else if(start==2 && destination==3)
        {
            printf("\nDestination:\t\tThakurgone_Road To Dinajpur");
            printf("\nDeparture:\t\t14:10");
        }
        else if(start==2 && destination==4)
        {
            printf("\nDestination:\t\tThakurgone_Road To Parbatipur");
            printf("\nDeparture:\t\t14:10");
        }
        else if(start==2 && destination==5)
        {
            printf("\nDestination:\t\tThakurgone_Road To Biman_Bandar");
            printf("\nDeparture:\t\t14:10");
        }
        else if(start==2 && destination==6)
        {
            printf("\nDestination:\t\tThakurgone_Road To Dhaka");
            printf("\nDeparture:\t\t14:10");
        }
        else if(start==3 && destination==4)
        {
            printf("\nDestination:\t\tDinajpur To Parbatipur");
            printf("\nDeparture:\t\t15:02");
        }
        else if(start==3 && destination==5)
        {
            printf("\nDestination:\t\tDinajpur To Biman_Bandar");
            printf("\nDeparture:\t\t15:02");
        }
        else if(start==3 && destination==6)
        {
            printf("\nDestination:\t\tDinajpur To Dhaka");
            printf("\nDeparture:\t\t15:02");
        }
        else if(start==4 && destination==5)
        {
            printf("\nDestination:\t\tParbatipur To Biman_Bandar");
            printf("\nDeparture:\t\t15:53");
        }
        else if(start==4 && destination ==6)
        {
            printf("\nDestination:\t\tParbatipur To Dhaka");
            printf("\nDeparture:\t\t15:53");
        }
        else if(start==5 && destination==6)
        {
            printf("\nDestination:\t\tBiman_Bandar_Road To Dhaka");
            printf("\nDeparture:\t\t22:05");
        }
    }
    if (train_num==705)
    {
        printf("\nTrain:\t\t\tAgnibina Express");
        if(start==1 && destination==2)
        {
            printf("\nDestination:\t\tDhaka to Biman_Bandar");
            printf("\nDeparture:\t\t09:40");
        }
        else if(start==1 && destination==3)
        {
            printf("\nDestination:\t\tDhaka to Gafargaon");
            printf("\nDeparture:\t\t09:40");
        }
        else if(start==1 && destination==4)
        {
            printf("\nDestination:\t\tDhaka to Mymensingh");
            printf("\nDeparture:\t\t09:40");
        }
        else if(start==1 && destination==5)
        {
            printf("\nDestination:\t\tDhaka to Jamalpur_Town");
            printf("\nDeparture:\t\t09:40");
        }
        else if(start==1 && destination==6)
        {
            printf("\nDestination:\t\tDhaka to Sarishabari");
            printf("\nDeparture:\t\t09:40");
        }
        else if(start==1 && destination==7)
        {
            printf("\nDestination:\t\tDhaka to Tarakandi");
            printf("\nDeparture:\t\t09:40");
        }
        else if(start==2 && destination==3)
        {
            printf("\nDestination:\t\tBiman_bandar to Gafargaon");
            printf("\nDeparture:\t\t10:12");
        }
        else if(start==2 && destination==4)
        {
            printf("\nDestination:\t\tBiman_bandar to Mymensingh");
            printf("\nDeparture:\t\t10:12");
        }
        else if(start==2 && destination==5)
        {
            printf("\nDestination:\t\tBiman_bandar to Jamalpur_Town");
            printf("\nDeparture:\t\t10:12");
        }
        else if(start==2 && destination==6)
        {
            printf("\nDestination:\t\tBiman_bandar to Sarishabari");
            printf("\nDeparture:\t\t10:12");
        }
        else if(start==2 && destination==7)
        {
            printf("\nDestination:\t\tBiman_bandar to Tarakandi");
            printf("\nDeparture:\t\t10:12");
        }
        else if(start==3 && destination==4)
        {
            printf("\nDestination:\t\tGafargaon to Mymensingh");
            printf("\nDeparture:\t\t11:52");
        }
        else if(start==3 && destination==5)
        {
            printf("\nDestination:\t\tGafargaon to Jamalpur_Town");
            printf("\nDeparture:\t\t11:52");
        }
        else if(start==3 && destination==6)
        {
            printf("\nDestination:\t\tGafargaon to Sarishabari");
            printf("\nDeparture:\t\t11:52");
        }
        else if(start==3 && destination==7)
        {
            printf("\nDestination:\t\tGafargaon to Tarakandi");
            printf("\nDeparture:\t\t11:52");
        }
        else if(start==4 && destination==5)
        {
            printf("\nDestination:\t\tMymensingh to Jamalpur_Town");
            printf("\nDeparture:\t\t12:43");
        }
        else if(start==4 && destination ==6)
        {
            printf("\nDestination:\t\tMymensingh to Sarishabari");
            printf("\nDeparture:\t\t12:43");
        }
        else if(start==4 && destination==7)
        {
            printf("\nDestination:\t\tMymensingh to Tarakandi");
            printf("\nDeparture:\t\t12:43");
        }
        else if(start==5 && destination==6)
        {
            printf("\nDestination:\t\tJamalpur to Sarishabari");
            printf("\nDeparture:\t\t13:50");
        }
        else if(start==5 && destination==7)
        {
            printf("\nDestination:\t\tJamalpur to Tarakandi");
            printf("\nDeparture:\t\t13:50");
        }
        else if(start==6 && destination==7)
        {
            printf("\nDestination:\t\tSarishabri to Tarakandi");
            printf("\nDeparture:\t\t14:30");
        }
    }
    if (train_num==706)
    {
        printf("\nTrain:\t\t\tAgnibina Express");
        if(start==1 && destination==2)
        {
            printf("\nDestination:\t\tTarakandi to Sarishabari");
            printf("\nDeparture:\t\t17:20");
        }
        else if(start==1 && destination==3)
        {
            printf("\nDestination:\t\tTarakandi to Jamalpur_Town");
            printf("\nDeparture:\t\t17:20");
        }
        else if(start==1 && destination==4)
        {
            printf("\nDestination:\t\tTarakandi to Mymensingh");
            printf("\nDeparture:\t\t17:20");
        }
        else if(start==1 && destination==5)
        {
            printf("\nDestination:\t\tTarakandi to Gafargaon");
            printf("\nDeparture:\t\t17:20");
        }
        else if(start==1 && destination==6)
        {
            printf("\nDestination:\t\tTarakandi to Biman_Bandar");
            printf("\nDeparture:\t\t17:20");
        }
        else if(start==1 && destination==7)
        {
            printf("\nDestination:\t\tTarakandi to Dhaka");
            printf("\nDeparture:\t\t17:20");
        }
        else if(start==2 && destination==3)
        {
            printf("\nDestination:\t\tSarishabari to Jamalpur_Town");
            printf("\nDeparture:\t\t17:40");
        }
        else if(start==2 && destination==4)
        {
            printf("\nDestination:\t\tSarishabari to Mymensingh");
            printf("\nDeparture:\t\t17:40");
        }
        else if(start==2 && destination==5)
        {
            printf("\nDestination:\t\tSarishabari to Gafargaon");
            printf("\nDeparture:\t\t17:40");
        }
        else if(start==2 && destination==6)
        {
            printf("\nDestination:\t\tSarishabari to Biman_bandar");
            printf("\nDeparture:\t\t17:40");
        }
        else if(start==2 && destination==7)
        {
            printf("\nDestination:\t\tSarishabari to Dhaka");
            printf("\nDeparture:\t\t17:40");
        }
        else if(start==3 && destination==4)
        {
            printf("\nDestination:\t\tJamalpur_Town to Mymensingh");
            printf("\nDeparture:\t\t18:25");
        }
        else if(start==3 && destination==5)
        {
            printf("\nDestination:\t\tJamalpur_Town to Gafargaon");
            printf("\nDeparture:\t\t18:25");
        }
        else if(start==3 && destination==6)
        {
            printf("\nDestination:\t\tJamalpur_Town to Biman_bandar");
            printf("\nDeparture:\t\t18:25");
        }
        else if(start==3 && destination==7)
        {
            printf("\nDestination:\t\tJamalpur_Town to Dhaka");
            printf("\nDeparture:\t\t18:25");
        }
        else if(start==4 && destination==5)
        {
            printf("\nDestination:\t\tMymensingh to Gafargaon");
            printf("\nDeparture:\t\t19:42");
        }
        else if(start==4 && destination ==6)
        {
            printf("\nDestination:\t\tMymensingh to Biman_bandar");
            printf("\nDeparture:\t\t19:42");
        }
        else if(start==4 && destination==7)
        {
            printf("\nDestination:\t\tMymensingh to Dhaka");
            printf("\nDeparture:\t\t19:42");
        }
        else if(start==5 && destination==6)
        {
            printf("\nDestination:\t\tGafargaon to Biman_bandar");
            printf("\nDeparture:\t\t20:37");
        }
        else if(start==5 && destination==7)
        {
            printf("\nDestination:\t\tGafargaon to Dhaka");
            printf("\nDeparture:\t\t");
        }
        else if(start==6 && destination==7)
        {
            printf("\nDestination:\t\tBiman_bandar to Dhaka");
            printf("\nDeparture:\t\t21:57");
        }
    }
    if (train_num==707)///dhaka to chapai banalata
    {
        printf("\ntrain:\t\t\tBanalata Express");
        if(start==1 && destination==2)
        {
            printf("\nDestination:\t\tDhaka to Biman_bandar");
            printf("\nDeparture:\t\t13:15");
        }
        else if(start==1 && destination==3)
        {
            printf("\nDestination:\t\tDhaka to Rajshahi");
            printf("\nDeparture:\t\t13:15");
        }
        else if(start==1 && destination==4)
        {
            printf("\nDestination:\t\tDhaka to Chapainababganj");
            printf("\nDeparture:\t\t13:15 ");
        }
        else if(start==2 && destination==3)
        {
            printf("\nDestination:\t\tBiman_Bandar to Rajshahi");
            printf("\nDeparture:\t\t13:47 ");
        }
        else if(start==2 && destination==4)
        {
            printf("\nDestination:\t\tBiman_Bandar to Chapainababganj");
            printf("\nDeparture:\t\t13:47 ");
        }
        else if(start==3 && destination==4)
        {
            printf("\nDestination:\t\tRajshahi to Chapainababganj");
            printf("\nDeparture:\t\t18:00 ");
        }
    }
    if (train_num==708)
    {
        printf("\ntrain:\t\t\tBanalata Express");
        if(start==1 && destination==2)
        {
            printf("\nDestination:\t\tChapainababganj to Rajshahi");
            printf("\nDeparture:\t\t05:50 ");
        }
        else if(start==1 && destination==3)
        {
            printf("\nDestination:\t\tChapainababganj to Biman_bandor");
            printf("\nDeparture:\t\t05:50 ");
        }
        else if(start==1 && destination==4)
        {
            printf("\nDestination:\t\tChapainababganj to Dhaka");
            printf("\nDeparture:\t\t05:50 ");
        }
        else if(start==2 && destination==3)
        {
            printf("\nDestination:\t\tRajshahi to Biman_bandar");
            printf("\nDeparture:\t\t07:00 ");
        }
        else if(start==2 && destination==4)
        {
            printf("\nDestination:\t\tRajshahi to Dhaka");
            printf("\nDeparture:\t\t07:00 ");
        }
        else if(start==3 && destination==4)
        {
            printf("\nDestination:\t\tBiman_bandar to Dhaka");
            printf("\nDeparture:\t\t11:40 ");
        }
    }
    if (train_num==709)
    {
        printf("\ntrain:\t\t\tSirajgong Express");
        if(start==1 && destination==2)
        {
            printf("\nDestination:\t\tDhaka To Biman_Bandar");
            printf("\nDeparture:\t\t17:00");
        }
        else if(start==1 && destination==3)
        {
            printf("\nDestination:\t\tDhaka To Jaydebpur");
            printf("\nDeparture:\t\t17:00");
        }
        else if(start==1 && destination==4)
        {
            printf("\nDestination:\t\tDhaka To Tangail");
            printf("\nDeparture:\t\t17:00");
        }
        else if(start==1 && destination==5)
        {
            printf("\nDestination:\t\tDhaka TO BBSETU_E");
            printf("\nDeparture:\t\t17:00");
        }
        else if(start==1 && destination==6)
        {
            printf("\nDestination:\t\tDhaka To Sirajganj");
            printf("\nDeparture:\t\t17:00");
        }
        else if(start==2 && destination==3)
        {
            printf("\nDestination:\t\tBiman_Bandar To Jaydebpur");
            printf("\nDeparture:\t\t17:32");
        }
        else if(start==2 && destination==4)
        {
            printf("\nDestination:\t\tBiman_Bandar To Tangail");
            printf("\nDeparture:\t\t17:32");
        }
        else if(start==2 && destination==5)
        {
            printf("\nDestination:\t\tBiman_Bandar To BBSETU_E");
            printf("\nDeparture:\t\t17:32");
        }
        else if(start==2 && destination==6)
        {
            printf("\nDestination:\t\tBiman_Bandar To Sirajganj");
            printf("\nDeparture:\t\t17:32");
        }
        else if(start==3 && destination==4)
        {
            printf("\nDestination:\t\tJaydebpur To Tangail");
            printf("\nDeparture:\t\t19:35");
        }
        else if(start==3 && destination==5)
        {
            printf("\nDestination:\t\tJaydebpur To BBSETU_E");
            printf("\nDeparture:\t\t19:35");
        }
        else if(start==3 && destination==6)
        {
            printf("\nDestination:\t\tJaydebpur To Sirajgan");
            printf("\nDeparture:\t\t19:35");
        }
        else if(start==4 && destination==5)
        {
            printf("\nDestination:\t\tTangail To BBSETU_E");
            printf("\nDeparture:\t\t20:05");
        }
        else if(start==4 && destination==6)
        {
            printf("\nDestination:\t\tTangail To Sirajganj");
            printf("\nDeparture:\t\t20:05");
        }
        else if(start==5 && destination==6)
        {
            printf("\nDestination:\t\tBBSETU_E");
            printf("\nDeparture:\t\t21:25");
        }
    }
    if (train_num==710)
    {
        printf("\ntrain:\t\t\tSirajgong Express");
        if(start==1 && destination==2)
        {
            printf("\nDestination:\t\tSirajganj To BBSETU_E");
            printf("\nDeparture:\t\t06:00");
        }
        else if(start==1 && destination==3)
        {
            printf("\nDestination:\t\tSirajganj To Tangail");
            printf("\nDeparture:\t\t06:00");
        }
        else if(start==1 && destination==4)
        {
            printf("\nDestination:\t\tSirajganj To Jaydebpur");
            printf("\nDeparture:\t\t06:00");
        }
        else if(start==1 && destination==5)
        {
            printf("\nDestination:\t\tSirajganj To Biman_Bandar");
            printf("\nDeparture:\t\t06:00");
        }
        else if(start==1 && destination==6)
        {
            printf("\nDestination:\t\tSirajganj To Dhaka");
            printf("\nDeparture:\t\t06:00");
        }
        else if(start==2 && destination==3)
        {
            printf("\nDestination:\t\tSirajganj To Tangail");
            printf("\nDeparture:\t\t07:20");
        }
        else if(start==2 && destination==4)
        {
            printf("\nDestination:\t\tBBSETU_E To Jaydebpur");
            printf("\nDeparture:\t\t07:20");
        }
        else if(start==2 && destination==5)
        {
            printf("\nDestination:\t\tBBSETU_E To Biman_Bandar");
            printf("\nDeparture:\t\t07:20");
        }
        else if(start==2 && destination==6)
        {
            printf("\nDestination:\t\tBBSETU_E To Dhaka");
            printf("\nDeparture:\t\t07:20");
        }
        else if(start==3 && destination==4)
        {
            printf("\nDestination:\t\tTangail To Jaydebpur");
            printf("\nDeparture:\t\t07:50");
        }
        else if(start==3 && destination==5)
        {
            printf("\nDestination:\t\tTangail To Biman_Bandar");
            printf("\nDeparture:\t\t07:50");
        }
        else if(start==3 && destination==6)
        {
            printf("\nDestination:\t\tTangail To Dhaka");
            printf("\nDeparture:\t\t07:50");
        }
        else if(start==4 && destination==5)
        {
            printf("\nDestination:\t\tJaydebpur To Biman_Bandar");
            printf("\nDeparture:\t\t09:25");
        }
        else if(start==4 && destination==6)
        {
            printf("\nDestination:\t\tJaydebpur To Dhaka");
            printf("\nDeparture:\t\t09:25");
        }
        else if(start==5 && destination==6)
        {
            printf("\nDestination:\t\tBiman_Bandar To Dhaka");
            printf("\nDeparture:\t\t09:53");
        }
    }
}

void printticket(char name[],int num_of_seats,int train_num,float charges,int start,int destination)
{
    printf("-------------------\n");
    printf("\tTICKET\n");
    printf("-------------------\n\n");
    printf("Name:\t\t\t%s",name);
    printf("\nNumber Of Seats:\t%d",num_of_seats);
    printf("\nTrain Number:\t\t%d",train_num);
    specifictrain(train_num,start,destination);
    printf("\nCharges:\t\t%0.2f tk",charges);
    printf("\nTicket PNR\t\t%d",PNR);
}

void login()
{
    int a=0,i=0;
    char uname[10],c=' ';
    char pword[10],code[10];
    char user[10]="user";
    char pass[10]="pass";
    do
    {

        printf("\n  =======================  LOGIN FORM  =======================\n  ");
        printf(" \n                       ENTER USERNAME:-");
        scanf("%s", &uname);
        printf(" \n                       ENTER PASSWORD:-");
        while(i<10)
        {
            pword[i]=getch();
            c=pword[i];
            if(c==13)
                break;
            else
                printf("*");
            i++;
        }
        pword[i]='\0';

        i=0;

        if(strcmp(uname,"user")==0 && strcmp(pword,"pass")==0)
        {
            printf("  \n\n\n       WELCOME TO OUR SYSTEM !! YOUR LOGIN IS SUCCESSFUL");
            printf("\n\n\n\t\t\t\tPress any key to continue...");
            getch();
            break;
        }
        else
        {
            printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
            a++;

            getch();
            system("CLS");
        }
    }
    while(a<=2);
    {
        if (a>2)
        {
            printf("\nSorry you have entered the wrong user_name and password for four times!!!");
            getch();
        }
    }
    system("CLS");
}

void train_details(int train_number)
{
    if(train_number ==701)
    {
        printf("\nTrain number\tTrain Name");
        //printf("\n------------\t----------");
        printf("\n701\t\tSubarna Express:");
        printf("\nNo. Station\tDeperture Time");
        printf("\n=== ========\t===============");
        printf("\n1.Chittagong\t07:10\n2.Biman_Bandor\t11:39\n3.Dhaka\t\t12:10\n");
        printf("\nStation\t\tFare\n");
        printf("Chittagong To Biman_Bandar : 290tk\n");
        printf("Chittagong To Dhaka : 315tk\n");
        printf("Biman_bandar To Dhaka : 15tk\n");
    }
    else if(train_number==702)
    {
        printf("\nTrain number\tTrain Name");
        printf("\n702\t\tSubarna Express:");
        printf("\nNo. Station\tDeperture Time");
        printf("\n=== ========\t===============");
        printf("\n1.Dhaka\t\t15:00\n2.Biman_Bandor\t15:25\n3.Chittagong\t20:10\n");
    }
    else if(train_number==703)
    {
        printf("\nTrain number\tTrain Name");
        printf("\n703\t\tPanchagar Express:");
        printf("\nNo. Station\tDeperture Time");
        printf("\n=== ========\t===============");
        printf("\n1.Dhaka\t\t\t00:10\n2.Biman_Bandor\t\t00:42\n3.Parbatipur\t\t07:00\n4.Dinajpur\t\t07:37\n5.Thakurgone_Road\t08:55\n6.Panchagar\t\t08:55\n");
    }
    else if(train_number==704)
    {
        printf("\nTrain number\tTrain Name");
        printf("\n704\t\tPanchagar Express:");
        printf("\nNo. Station\tDeperture Time");
        printf("\n=== ========\t===============");
        printf("\n1.Panchagar\t\t13:53\n2.Thakurgone_Road\t13:53\n3.Dinajpur\t\t15:02\n4.Parbatipur\t\t15:53\n5.Biman_Bandar\t\t22:05\n6.Dhaka\t\t\t22:35\n");
    }
    else if(train_number==705)
    {
        printf("\nTrain number\tTrain Name");
        printf("\n705\t\tAugnibina Express:");
        printf("\nNo. Station\tDeperture Time");
        printf("\n=== ========\t===============");
        printf("\n1.Dhaka\t\t09:40\n2.Biman_Bandor\t10:12\n3.Gafargaon\t11:52\n4.Mymensingh\t12:42\n5.Jamalpur_Town\t13:50\n6.Sarishabari\t14:30\n7.Tarakandi\t15:00\n");
    }
    else if(train_number==706)
    {
        printf("\nTrain number\tTrain Name");
        printf("\n706\t\tAugnibina Express:");
        printf("\nNo. Station\tDeperture Time");
        printf("\n1.Tarakandi\t17:20\n2.Sarishabari\t17:40\n3.Jamalpur_Town\t18:25\n4.Mymensingh\t19:42\n5.Gafargaon\t20:37\n6.Biman_Bondor\t21:57\n7.Dhaka\t\t22:15\n");
    }
    else if(train_number==707)
    {
        printf("\nTrain number\tTrain Name");
        printf("\n707\t\tBanalata Express:");
        printf("\nNo. Station\tDeperture Time");
        printf("\n=== ========\t===============");
        printf("\n1.Dhaka\t\t\t13:15\n2.Biman_Bandor\t\t13:47\n3.Rajshahi\t\t18:00\n4.Chapainababganj\t19:10\n");
    }
    else if(train_number==708)
    {
        printf("\nTrain number\tTrain Name");
        printf("\n708\t\tBanalata Express:");
        printf("\nNo. Station\tDeperture Time");
        printf("\n=== ========\t===============");
        printf("\n1.Chapainababganj\t05:50\n2.Rajshahi\t\t07:00\t\n3.Biman_Bandor\t\t13:47\n4.Dhaka\t\t\t14:20\n");
    }
    else if(train_number==709)
    {
        printf("\nTrain number\tTrain Name");
        printf("\n709\t\tSirajganj Express:");
        printf("\nNo. Station\tDeperture Time");
        printf("\n=== ========\t===============");
        printf("\n1.Dhaka\t\t17:00\n2.Biman_Bandar\t17:32\n3.Jaydebpur\t18:10\n4.Tangail\t19:35\n5.BBSETU_E\t20.05\n6.Sirajganj\t21.25\n");
    }
    else if(train_number==710)
    {
        printf("\nTrain number\tTrain Name");
        printf("\n710\t\tSirajganj Express:");
        printf("\nNo. Station\tDeperture Time");
        printf("\n=== ========\t===============");
        printf("\n1. Sirajganj\t06:00\n2. BBSETU_E\t07:20\n3. Tangail\t07:50\n4. Jaydebpur\t09:15\n5. Biman_Bandar\t09:53\n6. Dhaka\t10:53\n");
    }
}


void viewdetails(void)
{
    system("CLS");
    int TT_number;
    printf("-------------------------------------------------------------------------------");
    printf("\nTr.No\tName\t\t\tDestinations\n");
    printf("-------------------------------------------------------------------------------");
    printf("\n701\tSubarna Express\t\tChittagong To Dhaka");
    printf("\n702\tSubarna Express\t\tDhaka To Chittagong");
    printf("\n703\tPanchagar Express\tDhaka To Panchagar");
    printf("\n704\tPanchagar Express\tPanchagar To Dhaka");
    printf("\n705\tAgnibina Express\tDhaka To Tarakandi");
    printf("\n706\tAgnibina Express\tTarakandi To Dhaka");
    printf("\n707\tBanalata Express\tDhaka To Chapainababganj");
    printf("\n708\tBanalata Express\tChapainababganj To Dhaka");
    printf("\n709\tSirajgong Express\tSirajganj To Dhaka");
    printf("\n710\tSirajgong Express\tDhaka To Sirajganj");
    printf("\n\nEnter Train Number To Show Details:");
    scanf("%d",&TT_number);
    train_details(TT_number);
}



void reservation(void)
{
    char confirm;
    int i=0,start,destination;
    float charges;
    pd passdetails;
    FILE *fp;
    fp=fopen("seats_reserved.txt","w");
    system("CLS");

    printf("\nEnter Your Name:> ");
    fflush(stdin);
    gets(passdetails.name);
    printf("\n\n>>Press Enter To View Available Trains<< ");
    getch();
    system("CLS");
    viewdetails();
    printf("\n\nEnter train number:> ");
start1:
    scanf("%d",&passdetails.train_num);
    if(passdetails.train_num>=701 && passdetails.train_num<=710)
    {
        PNR++;
        train_details(passdetails.train_num);
        printf("Enter two station number :");
        scanf("%d %d",&start,&destination);
        printf("Total Number of seat=100\n");
        printf("Available Number of seat=%d\n",no_of_seat);
        printf("\nEnter Number of seats:> ");
        scanf("%d",&passdetails.num_of_seats);
        no_of_seat-=passdetails.num_of_seats;
        cancel_set=passdetails.num_of_seats;
        charges=charge(passdetails.train_num,passdetails.num_of_seats,start,destination);
        printticket(passdetails.name,passdetails.num_of_seats,passdetails.train_num,charges,start,destination);
    }
    else
    {
        printf("\nInvalid train Number! Enter again--> ");
        goto start1;
    }

    printf("\n\nConfirm Ticket (y/n):>");
start:
    scanf(" %c",&confirm);
    if(confirm == 'y')
    {
        fprintf(fp,"%s\t\t%d\t\t%d\t\t%.2f\n",&passdetails.name,passdetails.num_of_seats,passdetails.train_num,charges);

        printf("==================");
        printf("\n Reservation Done\n");
        printf("==================");
        printf("\nPress any key to go back to Main menu");
    }
    else
    {
        if(confirm=='n')
        {
            printf("\nReservation Not Done!\nPress any key to go back to  Main menu!");
        }
        else
        {
            printf("\nInvalid choice entered! Enter again-----> ");
            goto start;
        }
    }
    fclose(fp);
    getch();
}

void cancel(void)
{
    system("CLS");
    int trainnum,pnr;
    no_of_seat-=cancel_set;
    printf("-----------------------\n");
    printf("Enter the train number: ");
    scanf("%d",&trainnum);
here :
    printf("\nEnter the PNR number:");
    scanf("%d",&pnr);
    if(pnr==PNR)
    {
        printf("\n-----------------------\n");
        printf("\n\nCancelled");
    }
    else
    {
        printf("\n-----------------------\n");
        printf("\n\nWrong PNR..please give correct PNR number\n");
        goto here;
    }
    FILE *fp;
    fp=fopen("seats_reserved.txt","w");
    fclose(fp);
    getch();
}

int main()
{
    system("CLS");
    printf("\t\t==================================================\n");
    printf("\t\t|                                                |\n");
    printf("\t\t|      -----------------------------------       |\n");
    printf("\t\t|       Railway TICKET RERSRVATION SYSTEM        |\n");
    printf("\t\t|      -----------------------------------       |\n");
    printf("\t\t|                                                |\n");
    printf("\t\t|                                                |\n");
    printf("\t\t|                                                |\n");
    printf("\t\t|              BROUGHT TO YOU BY                 |\n");
    printf("\t\t|         | Jahid Hasan Raju,CE-19017 |          |\n");
    printf("\t\t|         |  Rahij Mia ,CE-18028      |          |\n");
    printf("\t\t==================================================\n\n\n");


    printf(" \n Press any key to continue:");

    getchar();
    system("CLS");
    login();
    int menu_choice,choice_return;
start:
    system("cls");
    printf("\n========================================\n");
    printf("    Railway TICKET RERSRVATION SYSTEM ");
    printf("\n========================================");
    printf("\n1>> Reserve A Ticket");
    printf("\n------------------------");
    printf("\n2>> View All Available Trains");
    printf("\n------------------------");
    printf("\n3>> Cancel Reservation");
    printf("\n------------------------");
    printf("\n4>> Exit");
    printf("\n------------------------");
    printf("\n\n-->");
    scanf("%d",&menu_choice);
    switch(menu_choice)
    {
    case 1:
        reservation();
        break;
    case 2:
        viewdetails();
        printf("\n\nPress any key to go to Main Menu..");
        getch();
        break;
    case 3:
        cancel();
        break;
    case 4:
        return 0;
    default:
        printf("\nInvalid choice");
    }
    goto start;
    return(0);
}

