
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int i, j;

        // Step 1: Transpose the matrix
        // Convert rows into columns by swapping matrix[i][j]
        // with matrix[j][i].
        // Start j from i + 1 to avoid swapping twice.
        for (i = 0; i < n; i++) {
            for (j = i + 1; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Step 2: Reverse every row
        // This converts the transposed matrix into a
        // 90-degree clockwise rotated matrix.
        for (i = 0; i < n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
