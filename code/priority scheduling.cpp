#include<bits/stdc++.h>
using namespace std;
int main() {
	int bt[20],p[20],wt[20],tat[20],pr[20],i,j,n,total=0,pos,temp;
	float avg_wt,avg_tat;
	cout<<"Enter Total Number of Process:";
	cin>>n;
	cout<<"Enter burst time:"<<endl;
	for(int i=0;i<n;i++){
        cin>>bt[i];
	}
	cout<<"Enter priority :"<<endl;
	for(int i=0;i<n;i++){
        cin>>pr[i];
	}
	for (i=0;i<n;i++) {
		pos=i;
		for (j=i+1;j<n;j++) {
			if(pr[j]<pr[pos])
			                pos=j;
		}
		temp=pr[i];
		pr[i]=pr[pos];
		pr[pos]=temp;
		temp=bt[i];
		bt[i]=bt[pos];
		bt[pos]=temp;
		temp=p[i];
		p[i]=p[pos];
		p[pos]=temp;
	}
	wt[0]=0;
	for (i=1;i<n;i++) {
		wt[i]=0;
		for (j=0;j<i;j++)
		            wt[i]+=bt[j];
		total+=wt[i];
	}
	avg_wt=total/n;
	total=0;
	for (i=0;i<n;i++) {
		tat[i]=bt[i]+wt[i];
		total+=tat[i];
	}
	avg_tat=total/n;
	cout<<"Average Waiting Time="<<avg_wt<<endl;
	cout<<"Average Turnaround Time="<<avg_tat<<endl;
	return 0;
}
