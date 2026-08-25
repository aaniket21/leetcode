class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> st;
        for (auto n : nums)
            st.insert(n);

        
        int target=k;
        while (true) {
            if (st.count(target) == 0) {
                return target;
            }
            target+=k;
        }

        return -1;
    }
};