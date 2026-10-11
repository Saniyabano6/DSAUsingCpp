# Move All Zeroes to End

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array **arr[]** of non-negative integers, move all the zeros to the end of the array while maintaining the relative order of the non-zero elements. Perform the operation in place, without using an extra array.

 **Examples:** 

```
Input: arr[] = [1, 2, 0, 4, 3, 0, 5, 0]
Output: [1, 2, 4, 3, 5, 0, 0, 0]
Explanation: The three zeros are moved to the end while the order of the non-zero elements remains unchanged.

```

```
Input: arr[] = [10, 20, 30]
Output: [10, 20, 30]
Explanation: No change in array as there are no 0s.

```

```
Input: arr[] = [0, 0]
Output: [0, 0]
Explanation: No change in array as there are all 0s.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-11T03:46:08.610Z  

```cpp
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        //Two poitner approach
        int j =-1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                j=i;
                break;
            }
        }
        //no non zero
        if(j==-1)return;
        for(int i=j+1;i<arr.size();i++){
            if(arr[i]!=0){
                swap(arr[i],arr[j]);
                j++;
            }
    }
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1)