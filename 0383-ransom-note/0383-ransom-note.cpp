class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>freq1;
        unordered_map<char,int>freq2;

        for(auto c:magazine)freq1[c]++;
        for(auto c:ransomNote)freq2[c]++;

        for(auto pair:freq2){
            if(pair.second>freq1[pair.first]) return false;
        }
        return true;
    }
};