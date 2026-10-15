# Kadane's Algorithm

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an integer array  **arr[].**  You need to find the maximum sum of a subarray (containing at least one element) in the array  **arr[]**.

 **Examples:** 

```
Input: arr[] = [2, 3, -8, 7, -1, 2, 3]
Output: 11
Explanation: The subarray [7, -1, 2, 3] has the largest sum 11.

```

```
Input: arr[] = [-2, -4]
Output: -2
Explanation: The subarray [-2] has the largest sum -2.
```

```
Input: arr[] = [5, 4, 1, 7, 8]
Output: 25
Explanation: The subarray [5, 4, 1, 7, 8] has the largest sum 25.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-15T02:27:59.118Z  

```cpp
class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        //better approach TC:o(n)^2 Sc: o(1)
        /*int maxm=INT_MIN;
        for(int i=0;i<arr.size();i++){
            int sum=0;
            for(int j=i;j<arr.size();j++){
                sum+=arr[j];
                maxm=max(sum,maxm);
             
            }
        }*/
        //   return maxm;
         //kadane algorithm 
         long long sum=0, maxi=LONG_MIN;
         for(int i=0;i<arr.size();i++){
             sum+=arr[i];
             if(sum>maxi){ 
                 maxi=sum;
             }
             if(sum<0){
                 sum=0;
             }
         }
         return maxi;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1)