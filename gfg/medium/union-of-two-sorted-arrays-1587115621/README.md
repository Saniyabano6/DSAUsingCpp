# Union of 2 Sorted Arrays

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given two sorted arrays  **a[]**  and  **b[]**, where each array may contain duplicate elements, the task is to return the elements in the union of the two arrays in sorted order. Union of two arrays can be defined as the set containing distinct elements that are present in either of the arrays.

 **Examples:** 

```
Input: a[] = [1, 2, 3, 4, 5], b[] = [1, 2, 3, 6, 7]
Output: [1, 2, 3, 4, 5, 6, 7]
Explanation: Distinct elements including both the arrays are: 1 2 3 4 5 6 7.
```

```
Input: a[] = [2, 2, 3, 4, 5], b[] = [1, 1, 2, 3, 4]
Output: [1, 2, 3, 4, 5]
Explanation: Distinct elements including both the arrays are: 1 2 3 4 5.
```

```
Input: a[] = [1, 1, 1, 1, 1], b[] = [2, 2, 2, 2, 2]
Output: [1, 2]
Explanation: Distinct elements including both the arrays are: 1 2.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-11T04:10:54.673Z  

```cpp

class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        int n1 = a.size();
        int n2 = b.size();

        int i = 0, j = 0;
        vector<int> unionArr;

        while (i < n1 && j < n2) {
            if (a[i] <= b[j]) {
                if (unionArr.empty() || unionArr.back() != a[i]) {
                    unionArr.push_back(a[i]);
                }
                i++;
            }
            else {
                if (unionArr.empty() || unionArr.back() != b[j]) {
                    unionArr.push_back(b[j]);
                }
                j++;
            }
        }

        // Remaining elements of array a
        while (i < n1) {
            if (unionArr.empty() || unionArr.back() != a[i]) {
                unionArr.push_back(a[i]);
            }
            i++;
        }

        // Remaining elements of array b
        while (j < n2) {
            if (unionArr.empty() || unionArr.back() != b[j]) {
                unionArr.push_back(b[j]);
            }
            j++;
        }

        return unionArr;
    }
};

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1)