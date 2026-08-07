class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long ans=0;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                long long calculate = (1LL * nums[i] * nums[j]) / (1LL * __gcd(nums[i], nums[j]) * __gcd(nums[i], nums[j]));
                ans=max(ans,calculate);
            }
        }
        return ans;
    }
};