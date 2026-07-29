class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";
        int len=min(word1.size(),word2.size());
        for(int i=0;i<len;i++){
            ans+=word1[i];
            ans+=word2[i];
        }
        ans+=word1.substr(len);
        ans+=word2.substr(len);
        return ans;
    }
};