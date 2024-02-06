#include<bits/stdc++.h>
using namespace std;

int count_digits(int n) {
    if (n == 0) return 0;
    int ans = count_digits(n / 10);
    return ans + 1;
}

int main() {
    int n = 40;
    cout << count_digits(n);
    return 0;
}