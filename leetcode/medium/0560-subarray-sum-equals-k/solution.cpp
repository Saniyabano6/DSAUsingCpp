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