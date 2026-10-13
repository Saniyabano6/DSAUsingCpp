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