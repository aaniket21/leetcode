class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>ans;
        int maximum=*max_element(candies.begin(),candies.end());
        for(int n:candies){
            n+extraCandies >= maximum ? ans.push_back(true) : ans.push_back(false);
        }
        return ans;
    }
};