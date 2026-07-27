class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        string s1="";
        string t1="";

        for(auto c : s){
            if(c != '#') s1+=c; 
            else if(!s1.empty()) s1.pop_back();
        }

        for(auto c : t){
            if(c != '#') t1+=c; 
            else if(!t1.empty()) t1.pop_back();
        }

        return s1==t1;
    }
};