#include<bits/stdc++.h>
using namespace std;

void makeZeroes(vector<vector<int>>& matrix, int row, int col, int m, int n) {
    int topRow = row, bottomRow = row, leftCol = col, rightCol = col;

    for (topRow; topRow >= 0; topRow--) {
        matrix[topRow][col] = 0;
    }
    for (bottomRow; bottomRow < m; bottomRow++) {
        matrix[bottomRow][col] = 0;
    }
    for (leftCol; leftCol >= 0; leftCol--) {
        matrix[row][leftCol] = 0;
    }
    for (rightCol; rightCol < n; rightCol++) {
        matrix[row][rightCol] = 0;
    }
}

int main() {
    vector<vector<int> >matrix = { { 0,1,2,0 },{3,4,5,2},{1,3,1,5} };
    int m = matrix.size(), n = matrix[0].size();
    vector<vector<int>>copyMatrix(m, vector<int>(n));

    for (int row = 0; row < m; row++) {
        for (int col = 0; col < n; col++) {
            copyMatrix[row][col] = matrix[row][col];
        }
    }

    for (int row = 0; row < m; row++) {
        for (int col = 0; col < n; col++) {
            if (copyMatrix[row][col] == 0) {
                makeZeroes(matrix, row, col, m, n);
            }
        }
    }

    for (int row = 0; row < m; row++) {
        for (int col = 0; col < n; col++) {
            cout << matrix[row][col];
        }
        cout << endl;
    }
    return 0;
}