class Solution {
public:
    int count(int n){
        int original_num=n;
        int ans=0;
        while(n){
            int rem=n%10;
            if(rem==0)continue;
            if(original_num%rem==0)ans++;
            n/=10;
        }
        return ans;
    }
    int countDigits(int num) {
        return count(num);
    }
};