#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int> >matrix = { { 1 } };
    // vector<vector<int> >matrix = { { 1,2,3,4 },{5,6,7,8},{9,10,11,12} };
    int m = matrix.size(), sr = 0, er = matrix.size() - 1, sc = 0, ec = matrix[0].size() - 1;
    int n = matrix[0].size(), count = 0;
    vector<int>ar;


    while (sr <= er && sc <= ec) {

        for (int col = sc; col <= ec; col++) {
            ar.push_back(matrix[sr][col]);
            count++;

        }
        if (m * n == count) break;
        sr++;
        for (int i = sr;i <= er;i++) {
            ar.push_back(matrix[i][ec]);
            count++;
        }
        if (m * n == count) break;
        ec--;
        for (int i = ec; i >= sc; i--) {
            ar.push_back(matrix[er][i]);
            count++;
        }
        if (m * n == count) break;
        er--;
        for (int i = er; i >= sr; i--) {
            ar.push_back(matrix[i][sc]);
            count++;
        }
        if (m * n == count) break;
        sc++;



    }

    // if (m % 2 != 0 && n % 2 != 0 && m == n && m > 1) {
    //     ar.push_back(matrix[--sr][--sc]);
    // }

    for (int i = 0; i < ar.size(); i++) {
        cout << ar[i] << " ";
    }

    return 0;
}