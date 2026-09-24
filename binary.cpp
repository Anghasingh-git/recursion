#include<iostream>
using namespace std;
int binary(int arr[],int start,int end,int k){
      if(start>=end){
        return ;
      }
      int mid=end+(start-end)/2;
      if(arr[mid]==k){
        return mid;
      }
      if(k>arr[mid]){
        return binary(arr,mid+1,end,k);
      }
      if(k<arr[mid]){
        return binary(arr,start,mid-1,k);
      }
    }
    int main(){
        int n,i,k;
        cout<<"size of array"<<endl;
        cin>>n;
        int arr[n];
        cout<<"elements"<<endl;
        for(i=0;i<n;i++){
        cin>>arr[i];
        }
        cout<<"enter the value to search"<<endl;
        cin>>k;
        cout<<binary(arr,0,n,k)<<endl;
        return 0;
    }