#include<bits/stdc++.h>
using namespace std;

int power(int x, int n) {
    if (n == 0) {
        return 1;
    }

    int ans = power(x, n - 1);

    return ans * x;
}


int main() {
    int x = 2, n = 4;
    int ans = power(x, n);

    cout << ans;

    return 0;
}