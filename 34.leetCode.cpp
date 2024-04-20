#include<bits/stdc++.h>
using namespace std;

int getFirst(vector<int>& nums, int target, int index) {
    if (index == 0) return index;
    while (nums[index] == target) {
        index--;
        if (index < 0) {
            break;
        }
    }
    return index + 1;
}

int getLast(vector<int>& nums, int target, int index) {
    if (index == nums.size() - 1) return index;
    while (nums[index] == target) {
        index++;
        if (index == nums.size()) {
            break;
        }
    }
    return index - 1;
}

int main() {
    vector<int>nums = { 1,3 };
    int target = 1;
    vector<int>v(2, -1);
    int s = 0, e = nums.size() - 1, mid = 0;


    while (s <= e) {
        mid = s + (e - s) / 2;
        if (nums[mid] == target) {

            v[0] = getFirst(nums, target, mid);
            v[1] = getLast(nums, target, mid);
            break;
        }
        if (target > nums[mid]) {
            s = mid + 1;
            // cout << "s " << s << endl;
        }
        if (target < nums[mid]) {
            e = mid - 1;
            // cout << "e " << e << endl;
        }
    }

    cout << v[0] << v[1] << endl;


    return 0;
}