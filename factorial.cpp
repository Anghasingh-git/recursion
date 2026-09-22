#include<iostream>
using namespace std;
int fact(int a){
    if(a==1){
        return;
    }
  return a * fact(a - 1);
}
int main(){
    int n;
    cout<<"number"<<endl;
    cin>>n;
    cout<<fact(n)<<endl;
}