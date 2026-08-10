class Solution {
public:
    int countElements(vector<int>& nums) {
        int minimum=*min_element(nums.begin(),nums.end());
        int maximum=*max_element(nums.begin(),nums.end());
        int cnt=0;
        for(auto n:nums){
            if(n>minimum && n<maximum) cnt++;
        }
        return cnt;
    }
};