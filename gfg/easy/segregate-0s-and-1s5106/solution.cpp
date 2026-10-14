class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int cnt0=0,cnt1=0;
        int i;
        for(i=0;i<arr.size();i++){
            if(arr[i]==0) cnt0++;
            else cnt1++;
        }
        for(i=0;i<cnt0;i++){ arr[i]=0;}
        for(i=cnt0;i<arr.size();i++){arr[i]=1;}

    }
};