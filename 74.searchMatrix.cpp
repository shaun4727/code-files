#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>>matrix = { { 1,3,5,7 },{10,11,16,20},{23,30,34,60} };
    int row = matrix.size(), col = matrix[0].size(), target = 13, begin = matrix[0][col - 1], st_row = 0;

    while (col > 0 && st_row < row) {
        if (matrix[st_row][col - 1] == target) {
            cout << st_row << col - 1;
            break;
        }
        if (matrix[st_row][col - 1] > target) {
            col--;
        }
        if (matrix[st_row][col - 1] < target) {
            st_row++;
        }
    }
    return 0;
}