# Majority Element

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array  **arr[]**. Find the majority element in the array. If no majority element exists, return  **-1**.

 **Note:**  A majority element in an array is an element that appears  **strictly** more than **arr.size()/2** times in the array.

 **Examples:** 

```
Input: arr[] = [1, 1, 2, 1, 3, 5, 1]
Output: 1
Explanation: Since, 1 is present more than 7/2 times, so it is the majority element.

```

```
Input: arr[] = [7]
Output: 7
Explanation: Since, 7 is single element and present more than 1/2 times, so it is the majority element.
```

```
Input: arr[] = [2, 13]
Output: -1
Explanation: Since, no element is present more than 2/2 times, so there is no majority element.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-14T02:58:23.330Z  

```cpp
class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
       // using hashing
       map<int,int>mpp;
       for(int i=0; i<arr.size();i++){
           mpp[arr[i]]++;
    }
    for(auto it:mpp){
        if(it.second>(arr.size()/2)){
            return it.first;
        }
    }
    return -1;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1)