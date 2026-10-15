class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //kadane algorithm :Kadane’s Algorithm is an \(O(n)\) time and \(O(1)\) space approach that finds the maximum sum of a contiguous subarray by maintaining a running sum and resetting it when it becomes negative.
        long long sum=0, maxi = LONG_MIN;
        for(int i=0; i<nums.size();i++){
            sum+=nums[i];
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