#include<iostream>
using namespace std;
void number(int a){
    if(a==0){
        return;
    }
    number(a-1);
    cout<<a;
}
int main(){
    int n;
    cout<<"number"<<"  "<<endl;
    cin>>n;
    number(n);
}