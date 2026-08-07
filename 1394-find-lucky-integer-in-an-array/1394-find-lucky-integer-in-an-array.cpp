class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>freq;
        for(auto n:arr){
            freq[n]++;
        }
        int lucky=-1;
        for(auto n:arr){
            if(n==freq[n]) lucky=max(lucky,n);
        }
        return lucky;
    }
};