#include<bits/stdc++.h>
using namespace std;

void is_sorted(int a[]) {
    for (int i = 0; i < 5; i++) {
        cout << a[i];
    }
}

int main() {
    int a[] = { 1,2,3,4,5,6 };
    cout << sizeof(a) / sizeof(a[0]);
    is_sorted(a + 1);
    return 0;
}