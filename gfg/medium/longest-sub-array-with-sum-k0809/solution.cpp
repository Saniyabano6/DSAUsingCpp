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