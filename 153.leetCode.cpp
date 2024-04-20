#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int>nums = { 2,1 };
    int s = 0, e = nums.size() - 1, mid = 0, ans = nums[0];


    while (s <= e) {
        mid = s + (e - s) / 2;
        if (ans > nums[mid]) {
            ans = nums[mid];
        }
        if (nums[s] >= nums[e] && nums[mid] >= nums[s]) {
            s = mid + 1;
        }
        else {
            e = mid - 1;


        }
    }

    cout << ans;


    return 0;
}