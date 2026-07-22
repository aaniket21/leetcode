class Solution {
public:
    int alternateDigitSum(int n) {
        string operation="add";
        string num=to_string(n);
        reverse(num.begin(),num.end());
        int temp=stoi(num);
        int sum=0;
        while(temp){
            if(operation=="add"){
                sum+=temp%10;
                temp/=10;
                operation="sub";
            }else{
                sum-=temp%10;
                temp/=10;
                operation="add";
            }
        }
        return sum;
    }
};