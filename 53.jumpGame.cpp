#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int>nums = { 2,0,0 };
    int good = nums.size() - 1, index = nums.size() - 2;

    while (index >= 0) {
        if (index + nums[index] >= good) {
            good = index;
        }

        index--;
    }

    if (good <= 0) {
        cout << true;
    }
    else {
        cout << false;
    }

    return 0;
}