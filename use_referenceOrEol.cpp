#include<bits/stdc++.h>
using namespace std;

void find_pos(int a[], int size, int k, string& ans) {
    if ((size - 1) == k) return;
    find_pos(a, size, k + 1, ans);
    if (a[k] == 5) {
        ans += to_string(k);
    }
}

int main() {
    int a[] = { 5,5,6,5,6 };

    string ans = "";
    find_pos(a, 5, 0, ans);

    cout << ans;

    return 0;
}

// char a[]="abc"; if(a[0] == '\0')