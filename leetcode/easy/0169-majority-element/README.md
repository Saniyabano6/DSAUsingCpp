# Majority Element

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array `nums` of size `n`, return  *the majority element*.

The majority element is the element that appears more than `⌊n / 2⌋` times. You may assume that the majority element always exists in the array.

 

 **Example 1:** 

```
Input: nums = [3,2,3]
Output: 3

```

 **Example 2:** 

```
Input: nums = [2,2,1,1,1,2,2]
Output: 2

```

 

 **Constraints:** 

- n == nums.length
- 1 <= n <= 5 * 104
- -109 <= nums[i] <= 109
- The input is generated such that a majority element will exist in the array.

 

 **Follow-up:**  Could you solve the problem in linear time and in `O(1)` space?

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 38.40%)  
**Memory:** 42 MB (beats 44.18%)  
**Submitted:** 2026-10-14T03:17:17.548Z  

```cpp
class Solution {
public:
    int majorityElement(vector<int>& nums) {
       //moore's voting algorithm
        int cnt=0;
        int elem=0;
        for(int i=0;i<nums.size();i++){
            if(cnt==0){
                elem=nums[i];
            }
             if(nums[i]==elem){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        int cnt1=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==elem) cnt1++;
        }
        if(cnt1>(nums.size()/2)){
            return elem;
        }
        return -1;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/majority-element/)