#include<bits/stdc++.h>
using namespace std;

int multiplication(int n, int m) {
    if (m == 1) return n;
    int ans = multiplication(n, m - 1);
    return ans + n;
}

int main() {
    int n = 5, m = 5;
    cout << multiplication(n, m);

    return 0;
}