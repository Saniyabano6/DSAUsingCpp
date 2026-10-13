# Subarray Sum Equals K

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array of integers `nums` and an integer `k`, return  *the total number of subarrays whose sum equals to*  `k`.

A subarray is a contiguous  **non-empty**  sequence of elements within an array.

 

 **Example 1:** 

```
Input: nums = [1,1,1], k = 2
Output: 2

```

 **Example 2:** 

```
Input: nums = [1,2,3], k = 3
Output: 2

```

 

 **Constraints:** 

- 1 <= nums.length <= 2 * 104
- -1000 <= nums[i] <= 1000
- -107 <= k <= 107

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 8.3 MB  
**Submitted:** 2026-10-13T03:21:24.003Z  

```cpp
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> preSumMap;  // prefixSum -> frequency
        preSumMap[0] = 1;                  // empty prefix, handles subarrays starting at index 0
        int sum = 0, count = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];                // running prefix sum
            int rem = sum - k;             // prefix we need to have seen before

            // every earlier prefix equal to rem gives one valid subarray ending at i
            if (preSumMap.find(rem) != preSumMap.end())
                count += preSumMap[rem];

            preSumMap[sum]++;              // record current prefix sum
        }
        return count;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/subarray-sum-equals-k/)