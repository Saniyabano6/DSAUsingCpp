# Two Sum - Pair with Given Sum

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array  **arr[]**  of integers and another integer  **target**. Determine if there exist two distinct indices such that the sum of their elements is equal to the target.

 **Examples:** 

```
Input: arr[] = [0, -1, 2, -3, 1], target = -2
Output: true
Explanation: arr[3] + arr[4] = -3 + 1 = -2
```

```
Input: arr[] = [1, -2, 1, 0, 5], target = 0
Output: false
Explanation: None of the pair makes a sum of 0

```

```
Input: arr[] = [11], target = 11
Output: false
Explanation: No pair is possible as only one element is present in arr[]
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-13T03:52:07.373Z  

```cpp
class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        //first approach using map 
        map<int,int>mpp;
        for(int i=0;i<arr.size();i++){
            int a=arr[i];
            int more=target-a;
            if(mpp.find(more)!=mpp.end()){
                return true;
            }
            mpp[a]=i;
        }
        return false;
        //2nd approach using two pointer
        int left=0,right=arr.size()-1;
        sort(arr.begin(),arr.end());
        while(left<right){
            int sum=arr[left]+arr[right];
            if(sum==target){
                return true;
            }
            else if(sum<target) left++;
            else right--;
            
        }
        return false;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/key-pair5616/1)