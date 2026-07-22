class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int singleSum=0;
        int doubleSum=0;
        for(int n:nums){
            if(n>9)doubleSum+=n;
            else singleSum+=n;
        }
        return singleSum!=doubleSum;
    }
};