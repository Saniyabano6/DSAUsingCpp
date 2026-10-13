class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
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
    }
};