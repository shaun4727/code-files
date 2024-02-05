#include<bits/stdc++.h>
using namespace std;

int main() {
    string columnTitle = "ZY", atoz = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int ans = 0, power = 26, position = 0, multi = 1;

    for (int i = 0; i < columnTitle.size(); i++) {
        position = i + 1;
        if (i < 1) {
            ans = atoz.find(columnTitle[columnTitle.size() - position]) + 1;
        }
        else {
            multi = atoz.find(columnTitle[columnTitle.size() - position]) + 1;
            for (int j = 0; j < i; j++) {
                multi = multi * 26;
            }
            ans = ans + multi;
        }
    }
    cout << ans;

    return 0;
}
