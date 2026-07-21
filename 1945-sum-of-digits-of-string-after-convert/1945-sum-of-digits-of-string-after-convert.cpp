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
    int getLucky(string s, int k) {
        int val=0;

        for(char c:s){
            int num=c-'a'+1;
            if(num>9){
                calculate(num);
            }
            val+=num;
        }

        while(k>1){
            calculate(val);
            k--;
        }

        return val;
    }
};