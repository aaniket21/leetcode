class Solution {
public:
    void calculate(int &res){
        int temp=res;
        int sum=0;
        while(temp){
            int rem=temp%10;
            sum+=rem;
            temp/=10;
        }
        res=sum;
    }
    int addDigits(int num) {
        int res=num;
        while(res>9){
            calculate(res);
        }
        return res;
    }
};