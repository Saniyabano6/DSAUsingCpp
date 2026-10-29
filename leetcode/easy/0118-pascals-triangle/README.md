# Pascal's Triangle

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer `numRows`, return the first numRows of  **Pascal's triangle**.

In  **Pascal's triangle**, each number is the sum of the two numbers directly above it as shown:

 

 **Example 1:** 

```
Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]

```

 **Example 2:** 

```
Input: numRows = 1
Output: [[1]]

```

 

 **Constraints:** 

- 1 <= numRows <= 30

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 9.6 MB (beats 59.64%)  
**Submitted:** 2026-10-29T02:54:46.666Z  

```cpp
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        // Stores the complete Pascal's Triangle
        vector<vector<int>> ans;

        // Generate each row, starting from row 0
        for (int i = 0; i < numRows; i++) {

            // Stores the current row
            vector<int> row;

            // First element of every row is always 1
            long long val = 1;

            // Generate elements from column 0 to i
            for (int j = 0; j <= i; j++) {

                // Add the current element to the row
                row.push_back((int)val);

                // Calculate the next element using the nCr formula
                // C(i, j+1) = C(i, j) * (i-j) / (j+1)
                val = val * (i - j) / (j + 1);
            }

            // Add the completed row to Pascal's Triangle
            ans.push_back(row);
        }

        // Return the complete Pascal's Triangle
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/pascals-triangle/)