class Solution {
public:
    int maxProduct(vector<int>& nums) {
        auto it=max_element(nums.begin(),nums.end());
        int max1=*it;
        *it=INT_MIN;

        it=max_element(nums.begin(),nums.end());
        int max2=*it;

        return (max1-1)*(max2-1);
    }
};