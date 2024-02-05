#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = " ", temp;
    int res = 1;

    for (int i = 0; i < s.size(); i++) {
        if ((int(s[i]) >= 48 && int(s[i]) <= 57) || (int(s[i]) >= 65 && int(s[i]) <= 90) || (int(s[i]) >= 97 && int(s[i]) <= 122)) {
            if (int(s[i]) >= 65 && int(s[i]) <= 90) {
                char c = char(int(s[i]) + 32);
                temp += c;
            }
            else {
                temp += s[i];
            }
        }
    }
    for (int i = 0, e = temp.size() - 1; i <= e; i++, e--) {
        if (int(temp[i]) != int(temp[e])) {
            res = 0;
            break;
        }
    }
    cout << temp << endl;
    cout << res;

    return 0;
}


