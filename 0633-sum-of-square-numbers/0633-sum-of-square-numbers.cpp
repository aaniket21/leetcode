class Solution {
public:
    bool judgeSquareSum(int c) {
        int last=sqrt(c);
        int first=1;
        if(last*last==c)return true;
        while(first<=last){
            int a = first * first;
            int b = last * last;
            if(a==c - b)return true;
            else if(a<c - b)first++;
            else last--;
        }
        return false;
    }
};