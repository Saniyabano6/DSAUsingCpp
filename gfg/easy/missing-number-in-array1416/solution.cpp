
class Solution {
  public:
    int missingNum(vector<int>& arr) {
        //using hash
        int n = arr.size();
        vector <int> hash(n+2,0);

        for (int i = 0; i < n; i++) {
            hash[arr[i]] = 1;
        }

        for (int i = 1; i <= n + 1; i++) {
            if (hash[i] == 0) {
                return i;
            }
        }

        return -1;
    }
};
