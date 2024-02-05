#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "abbaca", ans = "";
    stack<char>c;
    for (int i = 0; i < s.size(); i++) {
        if (c.empty() || c.top() != s[i]) {
            c.push(s[i]);
        }
        else {
            c.pop();
        }
    }

    while (!c.empty()) {
        ans.push_back(c.top());
        c.pop();
    }

    reverse(ans.begin(), ans.end());

    cout << ans;
    return 0;
}