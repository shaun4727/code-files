#include<bits/stdc++.h>

using namespace std;

int main() {
    string res = "";
    int n = 439422;
    while (n > 26) {
        n -= 1;
        cout << (char)('A' + 1) << endl;
        res = (char)('A' + n % 26) + res;
        n /= 26;
    }
    n -= 1;
    res = (char)('A' + n) + res;
    cout << res;

    return 0;
}