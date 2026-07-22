class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt=0;
        for(int n:nums){
            if(to_string(n).size()%2==0)cnt++;
        }
        return cnt;
    }
};