class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,pair<int,int>> freq;
        for(int i=0;i<s.size();i++){
            if (freq.find(s[i]) == freq.end())
                freq[s[i]] = {i, 1};
            else
                freq[s[i]].second++;
        }
        for(int i=0;i<s.size();i++){
            if(freq[s[i]].first==i && freq[s[i]].second==1)return i;
        }
        return -1;
    }
};