#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string A, int i, int e) {
    while (i <= e) {
        if (A[i] != A[e]) {
            return false;
        }
        i++;
        e--;
    }
    return true;
}

int main() {
    string s = "abc";
    int res = 1, i = 0, e = s.size() - 1;

    while (i <= e) {
        if (s[i] != s[e]) {
            if (checkPalindrome(s, i + 1, e) || checkPalindrome(s, i, e - 1)) {
                break;
            }
            else {
                res = 0;
                break;
            }
        }
        i++;
        e--;
    }

    cout << res;

    return 0;
}