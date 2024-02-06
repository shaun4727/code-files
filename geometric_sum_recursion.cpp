#include<bits/stdc++.h>
using namespace std;

double power(double n, int k) {
    if (k == 0) return 1;
    int ans = power(n, k - 1);
    return ans * n;
}

double geoSum(double n, int k) {
    if (k == 0) return 1;
    double ans = geoSum(n, k - 1);
    return ans + (1 / power(n, k));
}

int main() {
    int k = 3;
    double n = 2;

    cout << geoSum(n, k);

    return 0;
}