#include<bits/stdc++.h>
using namespace std;

string find_pos(int a[], int size, int k) {
    if ((size - 1) == k) return "";
    string pos = "";
    pos += find_pos(a, size, k + 1);
    if (a[k] == 5) {
        pos += to_string(k);
    }
    return pos;
}

int main() {
    int a[] = { 5,5,6,5,6 };

    cout << find_pos(a, 5, 0);

    return 0;
}