#include<bits/stdc++.h>
using namespace std;

void reverse(string& s, int begin, int end) {
    while (begin <= end) {
        swap(s[begin], s[end]);
        begin++;
        end--;
    }
}

int main() {
    string s = "  hello world  ";
    int begin = 0, end = 0, i = 0;
    string result;




    while (i < s.size()) {
        if (s[i] == ' ' && result.size() != 0) result.push_back(' ');
        while (s[i] == ' ') i++;

        if (i == s.size()) break;
        result.push_back(s[i]);
        i++;
    }

    if (result[result.size() - 1] == ' ') result.pop_back();

    for (int i = 0; i < result.size(); i++) {
        if (result[i] == ' ') {
            end = i - 1;
            reverse(result, begin, end);
            begin = i + 1;
        }


    }
    reverse(result, begin, result.size() - 1);

    reverse(result, 0, result.size() - 1);

    cout << result;






    return 0;
}