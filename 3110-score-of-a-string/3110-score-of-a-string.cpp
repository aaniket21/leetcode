class Solution {
public:
    int scoreOfString(string s) {
        int ans=0;
        for(int i=0;i<s.size()-1;i++){
            int num1=s[i]-'a';
            int num2=s[i+1]-'a';
            ans+=abs(num1-num2);
        }
        return ans;
    }
};