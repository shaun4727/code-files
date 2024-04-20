#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int>nums = { 2,3,0,1,4 };

    int jump = 1, ladder = nums[0], stair = nums[0], n = nums.size();

    if (n == 1) jump = 0;
    for (int i = 1; i < n; i++) {
        if (i == n - 1) break;
        if (i + nums[i] > ladder) {
            ladder = i + nums[i];
        }
        stair--;
        if (stair == 0) {
            jump++;
            stair = ladder - i;
        }
    }

    cout << jump;
    return 0;
}