class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int lesscnt=0;
        int equalcnt=0;
        int morecnt=0;
        for(auto n:nums){
            if(n<pivot)lesscnt++;
            if(n>pivot)morecnt++;
            if(n==pivot)equalcnt++;
        }

        vector<int> ans(nums.size());
        int i=0,j=lesscnt,k=lesscnt+equalcnt;

        for(auto n:nums){
            if(n<pivot){
                ans[i++]=n;
            }else if(n==pivot){
                ans[j++]=n;
            }else{
                ans[k++]=n;
            }
        }
        
        return ans;
    }
};