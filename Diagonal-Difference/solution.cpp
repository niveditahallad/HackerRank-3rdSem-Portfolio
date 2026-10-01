#include <bits/stdc++.h>
using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    int n = arr.size();
    int d1 = 0, d2 = 0;

    for (int i = 0; i < n; i++) {
        d1 += arr[i][i];
        d2 += arr[i][n - 1 - i];
    }

    return abs(d1 - d2);
}