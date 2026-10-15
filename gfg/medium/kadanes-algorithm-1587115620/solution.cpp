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
         //kadane algorithm : Kadane’s Algorithm is an \(O(n)\) time and \(O(1)\) space approach that finds the maximum sum of a contiguous subarray by maintaining a running sum and resetting it when it becomes negative.
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