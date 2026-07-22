class Solution {
public:
    void calculate(int &res){
        int temp=res;
        int sum=0;
        while(temp){
            sum+=temp%10;
            temp/=10;
        }
        res=sum;
    }
    int minElement(vector<int>& nums) {
        for(int &n:nums){
            calculate(n);
        }
        return *min_element(nums.begin(),nums.end());
    }
};