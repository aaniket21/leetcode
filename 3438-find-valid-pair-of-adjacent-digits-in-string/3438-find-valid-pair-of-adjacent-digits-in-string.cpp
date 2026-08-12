class Solution {
public:
    string findValidPair(string s) {
        unordered_map<char,int>freq;
        for(auto c:s){
            freq[c]++;
        }

        string ans="";
        for(int i = 0; i < s.length() - 1; i++) {
            char first = s[i];
            char second = s[i+1];
            
            if(first != second && freq[first] == (first - '0') && freq[second] == (second - '0')) {
                return s.substr(i, 2); 
            }
        }
        
        return "";
    }
};