class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int seqsum=nums[0];
        unordered_set<int> freq;
        for(auto n:nums) freq.insert(n);
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1){
                seqsum+=nums[i];
            }else{
                break;
            }
        }
        while(freq.count(seqsum)){
            seqsum++;
        }
        return seqsum;
    }
};