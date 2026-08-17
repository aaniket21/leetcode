class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;

        unordered_map<int,int>freq;
        unordered_set<int>st;
        for(auto n:nums){
            freq[n]++;
            st.insert(n);
        }

        priority_queue<pair<int,int>>element;
        for(auto n:st){
            element.push({freq[n],n});
        }

        while(k){
            int num=element.top().second;
            ans.push_back(num);
            element.pop();
            k--;
        }
        return ans;
    }
};