class Solution {
public:
    int minMoves(vector<int>& nums) {
        int moves=0;
        int maximum=*max_element(nums.begin(),nums.end());

        for(auto n:nums){
            moves+=maximum-n;
        }
        return moves;
    }
};