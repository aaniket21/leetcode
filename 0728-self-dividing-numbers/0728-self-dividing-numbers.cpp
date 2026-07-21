class Solution {
public:
    bool check(int num){
        int original_num=num;
        while(num){
            int last=num%10;
            if(last==0)return false;
            if(original_num%last!=0)return false;
            num/=10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>res;
        for(int i=left;i<=right;i++){
            if(check(i))res.push_back(i);
        }
        return res;
    }
};