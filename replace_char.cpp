#include<bits/stdc++.h>
using namespace std;

void replace_char(char a[]) {
    if (a[0] == '\0') {
        return;
    }
    if (a[0] == 'a') {
        a[0] = 'x';
    }
    replace_char(a + 1);
}

int main() {
    char a[100];
    cin >> a;

    replace_char(a);
    cout << a;
    return 0;
}