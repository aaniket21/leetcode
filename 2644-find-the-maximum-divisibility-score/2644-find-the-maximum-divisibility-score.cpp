class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int maxscore=-1,ans=-1;
        for(auto divisor:divisors){
            int cnt=0;
            for(auto n:nums){
                if(n%divisor==0) cnt++;
            }
            if(cnt > maxscore) {
                maxscore = cnt;
                ans = divisor;
            } 
            else if (cnt == maxscore) {
                ans = min(ans, divisor);
            }
        }

        return ans;
    }
};