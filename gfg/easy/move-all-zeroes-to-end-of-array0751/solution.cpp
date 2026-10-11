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