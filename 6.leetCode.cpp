#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "AB";
    int numRows = 1;
    string str[numRows], ans = "";
    int row = 0, flag = 0;


    for (int i = 0; i < s.size(); i++) {
        str[row] += s[i];
        if (row == numRows - 1) {
            flag = 1;
        }
        else if (row == 0) {
            flag = 0;
        }
        if (numRows != 1) {
            if (flag == 0) {
                row++;
            }
            else {
                row--;
            }
        }

    }

    for (int i = 0; i < numRows; i++) {
        ans += str[i];
    }

    cout << ans;
    return 0;
}