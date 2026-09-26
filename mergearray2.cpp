#include<iostream>
#include<vector>
using namespace std;
void merge(int arr[],int start,int end,int mid){
   vector<int>temp;
   int i=start;
   int j=mid+1;
   while(i<=mid&&j<=end){
    if(arr[i]<=arr[j]){
     temp.push_back(arr[i]);
     i++;
    }
    else{
        temp.push_back(arr[j]);
        j++;
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    for(int k=0;k<temp.size();k++){
        arr[start+k]=temp[k];
    }
   }
}
   void mergesort(int arr[], int start, int end) {
    if (start >= end) {
        return;
    }

    int mid = start + (end - start) / 2;
    mergesort(arr, start, mid);
    mergesort(arr, mid + 1, end);
    
    merge(arr, start, end, mid); 
}
int main(){
    int n,i;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
   cout<<"elements"<<endl;
   for(i=0;i<n;i++){
    cin>>arr[i];
   }
   mergesort(arr,0,n-1);
   cout<<"after merge sorting"<<endl;
   for(i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
   return 0;
}