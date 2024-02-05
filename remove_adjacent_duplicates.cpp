#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "abbaca";
    int i = 0;

    while (i < s.size()) {
        if (s[i] == s[i + 1]) {
            s.erase(i, 2);
            i = -1;
        }
        i++;
    }

    cout << s;
    return 0;
}