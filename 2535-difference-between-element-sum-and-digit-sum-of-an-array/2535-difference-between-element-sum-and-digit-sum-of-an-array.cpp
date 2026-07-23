class Solution {
public:
    int calculate(int num){
        int sum=0;
        while(num){
            sum+=num%10;
            num/=10;
        }
        return sum;
    }
    int differenceOfSum(vector<int>& nums) {
        int sum1=0,sum2=0;
        for(int n:nums){
            sum1+=n;
            sum2+=calculate(n);
        }
        return abs(sum1-sum2);
    }
};