# All Triplets with Zero Sum

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array  **arr[]**, find all possible triplets  **i, j, k**  in the  **arr[]**  whose sum of elements is equals to  **zero**. 
Returned triplet should also be internally sorted i.e.  **i<j<k.** 

 **Examples:** 

```
Input: arr[] = [0, -1, 2, -3, 1]
Output: [[0, 1, 4], [2, 3, 4]]
Explanation: Triplets with sum 0 are:
arr[0] + arr[1] + arr[4] = 0 + (-1) + 1 = 0
arr[2] + arr[3] + arr[4] = 2 + (-3) + 1 = 0
```

```
Input: arr[] = [1, -2, 1, 0, 5]
Output: [[0, 1, 2]]
Explanation: Only triplet which satisfies the condition is arr[0] + arr[1] + arr[2] = 1 + (-2) + 1 = 0
```

```
Input: arr[] = [2, 3, 1, 0, 5]
Output: [[]]
Explanation: There is no triplet with sum 0.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-30T04:46:58.066Z  

```cpp

class Solution {
public:
    vector<vector<int>> findTriplets(vector<int> &arr) {

        set<vector<int>> st;
        int n = arr.size();

        for(int i = 0; i < n; i++) {

            unordered_map<int, vector<int>> hashset;

            for(int j = i + 1; j < n; j++) {

                long long third = -(1LL * arr[i] + arr[j]);

                if(hashset.find(third) != hashset.end()) {

                    for(int k : hashset[third]) {
                        st.insert({i, k, j});
                    }
                }

                hashset[arr[j]].push_back(j);
            }
        }

        vector<vector<int>> ans(st.begin(), st.end());

        return ans;
    }
};

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/find-all-triplets-with-zero-sum/1)