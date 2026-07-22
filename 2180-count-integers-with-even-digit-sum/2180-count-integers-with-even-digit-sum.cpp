class Solution {
public:
    bool calculate(int res){
        int sum=0;
        while(res){
            sum+=res%10;
            res/=10;
        }
        return sum%2==0;
    }
    int countEven(int num) {
        int cnt=0;
        for(int i=1;i<=num;i++){
            if(calculate(i))cnt++;
        }
        return cnt;
    }
};