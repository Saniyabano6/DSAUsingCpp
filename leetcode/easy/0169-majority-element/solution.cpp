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