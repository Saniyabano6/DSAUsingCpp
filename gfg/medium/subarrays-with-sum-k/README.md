# Subarrays with Sum K

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an unsorted array  **arr[]**  of integers, find the number of subarrays whose sum exactly equal to a given number k.

 **Examples:** 

```
Input: arr[] = [10, 2, -2, -20, 10], k = -10
Output: 3
Explanation: Subarrays: arr[0...3], arr[1...4], arr[3...4] have sum exactly equal to -10.
```

```
Input: arr[] = [9, 4, 20, 3, 10, 5], k = 33
Output: 2
Explanation: Subarrays: arr[0...2], arr[2...4] have sum exactly equal to 33.

```

```
Input: arr[] = [1, 3, 5], k = 0
Output: 0
Explanation: No subarray with 0 sum.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-28T03:33:54.173Z  

```cpp

class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        unordered_map<int, int> mpp;
        mpp[0] = 1;

        int preSum = 0;
        int cnt = 0;

        for (int i = 0; i < arr.size(); i++) {
            preSum += arr[i];

            int remove = preSum - k;
            cnt += mpp[remove];

            mpp[preSum]++;
        }

        return cnt;
    }
};

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/subarrays-with-sum-k/1)