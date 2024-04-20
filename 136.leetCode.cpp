#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int>nums = { 1 };
    stack<pair<int, int> >numbers;

    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++) {
        if (numbers.empty() || numbers.top().first != nums[i]) {
            numbers.push(make_pair(nums[i], 1));
        }
        else {
            numbers.top().second++;
            if (numbers.top().second >= 2) {
                numbers.pop();
            }
        }
    }

    cout << numbers.top().first;

    return 0;
}