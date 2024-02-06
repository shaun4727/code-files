#include<bits/stdc++.h>
using namespace std;

int calculate_n(int n) {
    if (n == 0) return 0;
    int ans = calculate_n(n / 10);
    return ans + n % 10;
}

int main() {
    int n = 12345;

    cout << calculate_n(n);

    return 0;
}