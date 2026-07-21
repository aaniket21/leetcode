class Solution {
public:
    bool isPerfectSquare(int num) {
        int last=num;
        int first=1;
        while(first<=last){
            int mid=first+(last-first)/2;
            if(mid==num/mid && num % mid == 0)return true;
            else if(mid<num/mid)first=mid+1;
            else last=mid-1;
        }
        return false;
    }
};