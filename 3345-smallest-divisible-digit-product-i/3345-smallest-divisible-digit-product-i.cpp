class Solution {
public:
    int multiple(int num){
        int mul=1;
        while(num){
            int rem=num%10;
            mul*=rem;
            num/=10;
        }
        return mul;
    }
    int smallestNumber(int n, int t) {
        int ans=n;
        while(true){
            if(multiple(n)%t==0)break;
            n++;
        }
        return n;
    }
};