class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        if(nums.size()<1)return 0;
        
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
            if (nums.size() % (i + 1) == 0)
                ans += nums[i] * nums[i];
        return ans;
    }
};