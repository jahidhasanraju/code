#include<bits/stdc++.h>
using namespace std;
int p=1;
void mergesort(int arr[],int left,int right){
      if(left==right)return;
      int mid=(left+right)/2;
      mergesort(arr,left,mid);
      mergesort(arr,(mid+1),right);
      vector<int>v;
      int i=left;
      int j=mid+1;
      while(i<=mid&&j<=right){
        if(arr[i]<=arr[j]){
            v.push_back(arr[i]);
            i++;
        }
        else {
            v.push_back(arr[j]);
            j++;
        }
      }
      while(i<=mid){
        v.push_back(arr[i]);
        i++;
      }
      while(j<=right){
        v.push_back(arr[j]);
        j++;
      }
      for(int i=left;i<=right;i++){
        arr[i]=v[i-left];
      }
}
int main(){
        int arr[20];
        cout<<"given the size of arr:";
        int n;
        cin>>n;
        cout<<"given element:"<<endl;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int left=0;
        int right=n-1;
        mergesort(arr,left,right);
        for(int i=0;i<n;i++)cout<<arr[i]<<' ';
}
