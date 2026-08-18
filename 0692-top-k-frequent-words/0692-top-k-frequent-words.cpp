class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> freq;
        for(auto word:words)freq[word]++;

        vector<string> ans;
        for(auto word:freq) ans.push_back(word.first);

        sort(ans.begin(),ans.end(),[&](string a, string b){
            if(freq[a]!=freq[b]){
                return freq[a]>freq[b];
            }
            return a<b;
        });

        vector<string> ans1;
        int i=0;
        while(k){
            ans1.push_back(ans[i++]);
            k--;
        }

        return ans1;
    }
};