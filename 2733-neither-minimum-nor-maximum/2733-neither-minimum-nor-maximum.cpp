class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        // if(nums.size()<=2) return -1;

        // auto it=min_element(nums.begin(),nums.end());
        // *it=INT_MIN;
        // it=max_element(nums.begin(),nums.end());
        // *it=INT_MIN;

        // for(auto n:nums){
        //     if(n!=INT_MIN) return n;
        // }

        // return -1;

        // approach 2(median)
        if(nums.size()<=2) return -1;
        int first=nums[0],second=nums[1],third=nums[2];
        return (first+second+third)-min({first,second,third})-max({first,second,third});
    }
};