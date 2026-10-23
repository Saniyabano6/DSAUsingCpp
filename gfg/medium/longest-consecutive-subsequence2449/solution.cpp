class Solution {
  public:
    int longestConsecutive(vector<int>& arr) {
        // code here : better approach
         sort(arr.begin(), arr.end());
    int largest=1;
    int cnt=0;
    int last_smallest=INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i]-1==last_smallest){
            cnt++;
            last_smallest=arr[i];
        }
        else if(arr[i]!=last_smallest){
            cnt=1;
            last_smallest=arr[i];
        }
        largest=max(largest,cnt);
    }
     return largest;
    }
};