#include<bits/stdc++.h>
using namespace std;

void printAllSeq(string a, string output, string origin, stack<string>& store) {

    if (a.size() == 0) {
        // cout << output << " " << origin << endl;
        store.push(output);
        return;
    }

    // avoid first character
    printAllSeq(a.substr(1), output, "avoid", store);
    // take first character
    printAllSeq(a.substr(1), a[0] + output, "take", store);

}

int main() {
    string a = "abc", output;
    stack<string>store;
    printAllSeq(a, output, "origin", store);

    while (!store.empty()) {
        cout << store.top() << endl;
        store.pop();
    }
    return 0;
}