#include<iostream>
#include<string>
using namespace std;
int sub(const string &s, int k,int i = 0, string ans = ""){
    if(ans.length()==k){
        cout<<ans<<endl;
        return 1;
    }
    if(i==s.length()){
         return 0;
    }
   int count1= sub(s,k,i+1,ans);
   int count2=sub(s,k,i+1,ans+s[i]);
   return count1+count2;
}
int main(){
    int k;
    cout<<"enter the k"<<endl;
    cin>>k;
   int total= sub("abc",k,0,"");
   cout<<total<<endl;
}