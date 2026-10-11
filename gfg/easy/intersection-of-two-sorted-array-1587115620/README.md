# Intersection of Two Sorted Arrays

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given two sorted arrays  **arr1** [] and  **arr** 2[]. Your task is to return the  **intersection** of both arrays.
Intersection of two arrays is said to be elements that are common in both arrays. The intersection should not count duplicate elements.
Note: If there is no intersection then return an empty array.

 **Examples**  **:** 

```
Input: arr1[] = [1, 2, 3, 4], arr2[] = [2, 4, 6, 7, 8]
Output: [2, 4]
Explanation: 2 and 4 are only common elements in both the arrays.
```

```
Input: arr1[] = [1, 2, 2, 3, 4], arr2[] = [2, 2, 4, 6, 7, 8]
Output: [2, 4]
Explanation: 2 and 4 are the only common elements.
```

```
Input: arr1[] = [1, 2], arr2[] = [3, 4]
Output: []
Explanation: No common elements.
```

 **Constraints:** 
1 ≤ arr1.size(),arr2.size() ≤ 105
1 ≤ arr1[i], arr2[i] ≤ 106

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-11T04:55:19.027Z  

```cpp
class Solution {
public:
    vector<int> intersection(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        int n = arr1.size(), m = arr2.size();
        int i = 0, j = 0;

        while (i < n && j < m) {
            if (arr1[i] < arr2[j]) {
                i++;
            } else if (arr1[i] > arr2[j]) {
                j++;
            } else {
                if (ans.empty() || ans.back() != arr1[i])
                    ans.push_back(arr1[i]);
                i++;
                j++;
            }
        }
        return ans;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/intersection-of-two-sorted-array-1587115620/1)