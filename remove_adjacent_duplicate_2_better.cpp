#include<bits/stdc++.h>
using namespace std;

// class Pair {
// public:
//     char first;
//     int second;

//     Pair(char c, int count) {
//         first = c;
//         second = count;
//     }
// };

int main() {
    string s = "pbbcggttciiippooaais", ans = "";
    int k = 2;
    stack<pair<char, int> > c;
    for (int i = 0; i < s.size(); i++) {
        if (c.empty() || c.top().first != s[i]) {
            // Pair p(s[i], 1);

            c.push(make_pair(s[i], 1));
        }
        else {
            c.top().second++;
            if (c.top().second == k) {
                c.pop();
            }
        }
    }

    while (!c.empty()) {
        int count = c.top().second;
        while (count--) {
            ans.push_back(c.top().first);
        }
        c.pop();
    }

    reverse(ans.begin(), ans.end());

    cout << ans;

    return 0;
}