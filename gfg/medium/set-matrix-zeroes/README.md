# Set Matrix Zeros

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a 2D matrix  **mat[][]**  of size  **n x m**. Modify the matrix such that if  **mat[i][j]**  is 0, all the elements in the i-th row and j-th column are set to 0.

 **Examples:** 

```
Input: mat[][] = [[1, -1, 1], [-1, 0, 1], [1, -1, 1]]    
Output: [[1, 0, 1], [0, 0, 0], [1, 0, 1]]   
Explanation: mat[1][1] = 0, so all elements in row 1 and column 1 are updated to zeroes.

```

```
Input: mat[][] = [[0, 1, 2, 0], [1, 2, 6, 2], [1, 3, 1, 8]]     
Output: [[0, 0, 0, 0], [0, 2, 6, 0], [0, 3, 1, 0]]  
Explanation: mat[0][0] and mat[0][3] are 0s, so all elements in row 0, column 0 and column 3 are updated to zeroes.

```

 **Constraints:** 
1 ≤ n, m ≤ 500
- 231 ≤ mat[i][j] ≤ 231 - 1

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-25T03:22:09.835Z  

```cpp

class Solution {
public:
    void setMatrixZeroes(vector<vector<int>>& mat) {
        int n = mat.size();
        if (n == 0) return;
        int m = mat[0].size();
        vector<int> row(n, 0);
        vector<int> col(m, 0);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 0) {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (row[i] || col[j]) {
                    mat[i][j] = 0;
                }
            }
        }
    }
};

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/set-matrix-zeroes/1)