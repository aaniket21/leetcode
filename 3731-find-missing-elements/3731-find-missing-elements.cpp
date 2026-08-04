class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int smallest=*min_element(nums.begin(),nums.end());
        int largest=*max_element(nums.begin(),nums.end());

        int index=0;
        for(int i=smallest;i<=largest;i++){
            if(i!=nums[index]) ans.push_back(i);
            else index++;
        }
        return ans;
    }
};