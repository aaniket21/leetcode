class Solution {
public:
    string removeDuplicates(string s) {
        if(s.size()==0)return "";
        string ans="";
        for(int i=0;i<s.size();i++){
            if(ans.empty()){
                ans+=s[i];
            }else if(s[i]==ans.back()){
                ans.pop_back();
            }else{
                ans+=s[i];
            }
        }   
        return ans;
    }
};