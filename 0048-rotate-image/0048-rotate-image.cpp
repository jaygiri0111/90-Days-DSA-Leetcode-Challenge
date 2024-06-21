#include<bits/stdc++.h>
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        // step - 01 transpose of matrix
        for (int i = 0; i < row; i++) {
            for (int j = i; j < col; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // step - 02 row wise reverse
        for (int i = 0; i < row; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};