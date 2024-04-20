#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int> >matrix = { { 5,1,9,11 },{2,4,8,10},{13,3,6,7},{15,14,12,16} };
    int m = matrix.size();
    int n = matrix[0].size();

    for (int row = 0;row < m;row++) {
        for (int col = row; col < n; col++) {
            swap(matrix[row][col], matrix[col][row]);
        }
    }

    for (int row = 0; row < m; row++) {
        reverse(matrix[row].begin(), matrix[row].end());
    }
    for (int row = 0; row < m; row++) {
        for (int col = 0; col < n; col++) {
            cout << matrix[row][col];
        }
        cout << endl;
    }

    return 0;
}