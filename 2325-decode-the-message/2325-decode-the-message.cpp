class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char>mp;
        char start='a';
        for(auto c:key){
            if(c==' '){
                continue;
            }else if(mp.find(c)==mp.end()){
                mp[c]=start++;
            }
        }
        string ans="";

        for(auto c:message){
            if(c==' ')ans+=' ';
            else ans+=mp[c];
        }

        return ans;
    }
};