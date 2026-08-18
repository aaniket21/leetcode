class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>element;

        for(auto n:nums) element.push(n);

        while(k>1){
            element.pop();
            k--;
        }

        return element.top();
    }
};