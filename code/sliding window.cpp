#include<bits/stdc++.h>
bool consider_max[100];
bool consider_min[100];
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[100];
    int max_value,min_value;
    int i=0;
    while(i<n){
            cout<<i<<endl;
        cin>>arr[i];
        if(i==0){consider_max[i]=true,consider_min[i]=true,max_value=arr[i],min_value=arr[i];continue;}
        if((i%k)==(k-1))cout<<max_value<<' '<<min_value<<endl;
        if(arr[i]>arr[i-1]){
            int j=i-1;
            while(consider_max[j]==true&&arr[i]>arr[j]){
                consider_max[j]=false;
                j--;
            }
        }
        else if(arr[i]<arr[i-1]){
          int k=k-1;
          while(consider_min[k]=true&&arr[i]<arr[k]){
            consider_min[k]=false;
            k--;
        }
        }
        if(consider_max[i]==true&&(arr[i]>max_value))max_value=arr[i];
        if(consider_min[i]==true&&(arr[i]<min_value))min_value=arr[i];
        i++;
    }
}
