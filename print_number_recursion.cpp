#include<bits/stdc++.h>
using namespace std;

void print_num(int n) {
    if (n == 0) return;
    print_num(n - 1);
    cout << n << " ";
}

int main() {
    int num = 5;

    print_num(num);
    return 0;
}