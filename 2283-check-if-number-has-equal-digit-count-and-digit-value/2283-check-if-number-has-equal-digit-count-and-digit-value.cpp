class Solution {
public:
    bool digitCount(string num) {
        unordered_map<char,int>freq;
        for(char c:num)freq[c]++;
        for(int i=0;i<num.size();i++){
            if(freq[i + '0'] != num[i] - '0')return false;
        }   
        return true;
    }
};