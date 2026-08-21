class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int> st(arr.begin(), arr.end());

        unordered_map<int, int> mp;
        int rank = 1;
        for (int num : st) {
            mp[num] = rank;
            rank++;
        }

        vector<int> ans;
        for (int num : arr) {
            ans.push_back(mp[num]);
        }

        return ans;
    }
};