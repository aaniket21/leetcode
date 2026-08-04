class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n=nums.size();
        if(nums.size()<3)return -1;
        
        vector<int> left_min(n);
        left_min[0] = nums[0];
        for (int i = 1; i < n; i++) {
            left_min[i] = min(left_min[i - 1], nums[i]);
        }

        vector<int> right_min(n);
        right_min[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            right_min[i] = min(right_min[i + 1], nums[i]);
        }

        int sum=INT_MAX;
        for(int j=1;j<n-1;j++){
            if(left_min[j-1]<nums[j] && right_min[j+1]<nums[j]){
                int current_sum=left_min[j-1]+nums[j]+right_min[j+1];
                sum=min(sum,current_sum);
            }
        }
        return sum==INT_MAX?-1:sum;
    }
};