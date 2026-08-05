class Solution {
public:
    bool detectCapitalUse(string word) {
        int capitalcnt=0;
        for(auto c:word){
            if(isupper(c)){
                capitalcnt++;
            }
        }
        return capitalcnt==0 || capitalcnt==word.size() || capitalcnt==1 && isupper(word[0]);
    }
};