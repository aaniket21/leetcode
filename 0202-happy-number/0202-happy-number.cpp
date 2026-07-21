class Solution {
public:
    void calculate(int &res){
        int temp = res;
        int sum = 0;

        while (temp) {
            int rem = temp % 10;
            sum += rem * rem;
            temp /= 10;
        }

        res = sum;
    }
    bool isHappy(int n) {
        int res=n;
        while(res!=1 && res!=4){
            calculate(res);
        }
        return res==1;
    }
};