
class Solution {
public:
    vector<vector<int>> findTriplets(vector<int> &arr) {

        set<vector<int>> st;
        int n = arr.size();

        for(int i = 0; i < n; i++) {

            unordered_map<int, vector<int>> hashset;

            for(int j = i + 1; j < n; j++) {

                long long third = -(1LL * arr[i] + arr[j]);

                if(hashset.find(third) != hashset.end()) {

                    for(int k : hashset[third]) {
                        st.insert({i, k, j});
                    }
                }

                hashset[arr[j]].push_back(j);
            }
        }

        vector<vector<int>> ans(st.begin(), st.end());

        return ans;
    }
};
