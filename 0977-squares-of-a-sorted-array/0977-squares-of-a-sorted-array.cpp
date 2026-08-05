class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // vector<int> ans;
        // int i=0,j=0;
        // while(j<nums.size()){
        //     if(nums[j]>=0){
        //         break;
        //     }
        //     j++;
        // }
        // i=j-1;
        // while(i>=0 && j<nums.size()){
        //     int ps=nums[j]*nums[j];
        //     int ns=nums[i]*nums[i];
        //     if(ps<ns){
        //         ans.push_back(ps);
        //         j++;
        //     }else if(ns<ps){
        //         ans.push_back(ns);
        //         i--;
        //     }else{
        //         ans.push_back(ps);
        //         ans.push_back(ns);
        //         j++;
        //         i--;
        //     }
        // }
        // while(i>=0){
        //     int ns=nums[i]*nums[i];
        //     ans.push_back(ns);
        //     i--;
        // }
        // while(j<nums.size()){
        //     int ps=nums[j]*nums[j];
        //     ans.push_back(ps);
        //     j++;
        // }
        // return ans;


        //two pointer:
        int i=0,j=nums.size()-1;
        vector<int>ans(nums.size());
        int k=ans.size()-1;
        while(i<=j){
            int sq1=nums[i]*nums[i];
            int sq2=nums[j]*nums[j];
            if(sq1>sq2){
                ans[k--]=sq1;
                i++;
            }else{
                ans[k--]=sq2;
                j--;
            }
        }
        return ans;

    }

};