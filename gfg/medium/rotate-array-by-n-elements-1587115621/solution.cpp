class Solution {
  public:
    void rotateArr(vector<int>& arr, int d) {
        // code here
                int n = arr.size();
                if (n == 0) return;

                d = d % n;
                vector<int> temp;

                // Store first d elements
                for (int i = 0; i < d; i++) {
                    temp.push_back(arr[i]);
                }

                // Shift remaining elements to the left
                for (int i = d; i < n; i++) {
                    arr[i - d] = arr[i];
                }

                // Copy stored elements to the end
                for (int i = 0; i < d; i++) {
                    arr[n - d + i] = temp[i];
                }
    }
};