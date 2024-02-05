#include<bits/stdc++.h>
using namespace std;



int main() {
    string s = "pbbcggttciiippooaais";
    int k = 2;
    int i = 0, count = 1;;
    while (i < s.size()) {
        if (s[i] == s[i + 1]) {
            count++;
        }
        else {
            count = 1;
        }
        if (count == k) {
            s.erase((i - (k - 2)), k);
            i = -1;
            count = 1;
        }
        i++;
    }
    cout << s;

    return 0;
}