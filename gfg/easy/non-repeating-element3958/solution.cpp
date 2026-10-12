
class Solution {
  public:
    int firstNonRepeating(vector<int>& arr) {
        unordered_map<int, int> hash;

        // Count frequency
        for (int i = 0; i < arr.size(); i++) {
            hash[arr[i]]++;
        }

        // Find the first non-repeating element
        for (int i = 0; i < arr.size(); i++) {
            if (hash[arr[i]] == 1) {
                return arr[i];
            }
        }

        return 0;
    }
};
