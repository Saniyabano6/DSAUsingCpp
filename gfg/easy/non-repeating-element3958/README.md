# Non-Repeating Element

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Find the first non-repeating element in a given array **arr**  of integers and if there is not present any non-repeating element then return  **0** 

 **Note:**  The array consists of only positive and negative integers and  **not zero**.

 **Examples:** 

```
Input: arr[] = [-1, 2, -1, 3, 2]
Output: 3
Explanation: -1 and 2 are repeating whereas 3 is the only number occuring once. Hence, the output is 3. 
```

```
Input: arr[] = [1, 1, 1]
Output: 0
Explanation: There is not present any non-repeating element so answer should be 0.
```

 **Constraints:** 
1 <= arr.size <= 106
-109 <= arr[i] <= 109
arr[i] != 0

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-12T03:35:07.687Z  

```cpp

class Solution {
  public:
    int firstNonRepeating(vector<int>& arr) {
        unordered_map<int, int> hash;

        // Count frequency
        for (int i = 0; i < arr.size(); i++) {
            hash[arr[i]]++;
        }

        // Find the first non-repeating element
        for (int i = 0; i < arr.size(); i++) {
            if (hash[arr[i]] == 1) {
                return arr[i];
            }
        }

        return 0;
    }
};

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/non-repeating-element3958/1)