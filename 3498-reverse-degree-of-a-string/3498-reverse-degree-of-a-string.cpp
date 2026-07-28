class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            int index=26-(s[i]-'a');
            ans+=index*(i+1);
        }
        return ans;
    }
};