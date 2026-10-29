class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        // Stores the complete Pascal's Triangle
        vector<vector<int>> ans;

        // Generate each row, starting from row 0
        for (int i = 0; i < numRows; i++) {

            // Stores the current row
            vector<int> row;

            // First element of every row is always 1
            long long val = 1;

            // Generate elements from column 0 to i
            for (int j = 0; j <= i; j++) {

                // Add the current element to the row
                row.push_back((int)val);

                // Calculate the next element using the nCr formula
                // C(i, j+1) = C(i, j) * (i-j) / (j+1)
                val = val * (i - j) / (j + 1);
            }

            // Add the completed row to Pascal's Triangle
            ans.push_back(row);
        }

        // Return the complete Pascal's Triangle
        return ans;
    }
};