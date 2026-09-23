#include<iostream>
using namespace std;

void printarray( int n,int arr[],int i=0){
   if(i==n){
    return;
   }
   cout<<arr[i];
   printarray(n,arr,i+1);
    
}
int main(){
    int n;
    cout<<"number"<<endl;
    cin>>n;
    int arr[n];
    for (int j = 0; j < n; j++) {
        cin >> arr[j];
    }
   cout << "Array elements: ";
    printarray(n, arr); 
    cout << endl;
}