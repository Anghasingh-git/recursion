#include<iostream>
using namespace std;
int sumof(int a,int sum=0){
    int n=a%10;
    if(a==0){
        return sum;
    }
    else{
        return sumof(a/10,a%10+sum);
    }
}
int main(){
    int n;
    cout<<"number"<<endl;
    cin>>n;
    cout<<sumof(n)<<endl;
}
