#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int>nums = { 2,2,1 };
    int ans = 0;
    for (int i = 0; i < nums.size(); i++) {
        ans = ans ^ nums[i];
    }

    cout << ans;
    return 0;
}