#include <iostream>
#include <vector>
#include <string>
using namespace std;
int sub(const string &s, int k, int i = 0, const string &ans = "", int sum = 0) {
    if (i == s.size()) {
        if (sum == k) {
            cout << "[" << ans << "]" << endl;
            return 1;
        }
        return 0;
    }
    int val = s[i] - '0';
    int count1 = sub(s, k, i + 1, ans + s[i], sum + val);
    int count2 = sub(s, k, i + 1, ans, sum);

    return count1 + count2;
}
int main() {
    int k;
    cout << "k=" << endl;
    cin >> k;

    int total = sub("123", k, 0, "");
    return total;
}