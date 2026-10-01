#include <iostream>
#include <string>

using namespace std;


int sub(const string &s, int i = 0, string ans = "") {
   
    if (i == s.length()) {
        cout << ans << endl; 
        return 1;
    }

   
    int count1 = sub(s, i + 1, ans + s[i]);

   
    int count2 = sub(s, i + 1, ans);

    
    return count1 + count2;
}

int main() {
    int total = sub("abc", 0, "");
    cout << "Total subsequences: " << total << endl;
    return 0;
}