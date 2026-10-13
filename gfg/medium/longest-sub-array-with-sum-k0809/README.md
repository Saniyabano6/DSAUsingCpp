# Longest Subarray with Sum K

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array  **arr[]**  containing integers and an integer  **k**, your task is to find the length of the longest subarray where the sum of its elements is equal to the given value k. If there is no subarray with sum equal to k, return 0.

 **Examples:** 

```
Input: arr[] = [10, 5, 2, 7, 1, -10], k = 15
Output: 6
Explanation: Subarrays with sum = 15 are [5, 2, 7, 1], [10, 5] and [10, 5, 2, 7, 1, -10]. The length of the longest subarray with a sum of 15 is 6.
```

```
Input: arr[] = [-5, 8, -14, 2, 4, 12], k = -5
Output: 5
Explanation: Subarrays with sum = -5 are [-5] and [-5, 8, -14, 2, 4]. The length of the longest subarray with a sum of -5 is 5.
```

```
Input: arr[] = [10, -10, 20, 30], k = 5
Output: 0
Explanation: No subarray with sum = 5 is present in arr[].
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-13T03:05:20.227Z  

```cpp
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        unordered_map<long long,int> preSumMap;
        long long sum = 0;
        int maxlen = 0;
        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];
            if (sum == k) maxlen = max(maxlen, i + 1);

            long long rem = sum - k;
            if (preSumMap.find(rem) != preSumMap.end())
                maxlen = max(maxlen, i - preSumMap[rem]);
            if (preSumMap.find(sum) == preSumMap.end())  // first occurrence only
                preSumMap[sum] = i;
        }
        return maxlen;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1)