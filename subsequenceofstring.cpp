#include<iostream>
#include<string>
using namespace std;
void subsequences(const std::string&s,int i=0,const std::string ans=" "){
    if(i==s.length()){
        std::cout << ans << std::endl;
        return ;
    }
    subsequences(s,i+1,ans+s[i]);
    subsequences(s,i+1,ans);
}
int main(){
    subsequences("abc",0," ");
    return 0;
}