#include<iostream>
using namespace std;
void number(int a){
    cout<<a;
    if(a==0){
        return;
    }
    number(a-1);
    
}
int main(){
    int n;
    cout<<"number"<<endl;
    cin>>n;
    number(n);
}