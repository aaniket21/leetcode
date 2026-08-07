class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        //using stringstream:

        // int ans=0;
        // for(auto sentence:sentences){
        //     stringstream ss(sentence);
        //     string word;
        //     int cnt=0;
        //     while(ss>>word){
        //         cnt++;
        //     }
        //     ans=max(ans,cnt);
        // }
        // return ans;

        //without using stringstream:

        int ans=0;
        for(auto sentence:sentences){
            int cnt=0;
            for(auto word:sentence){
                if(word==' ')cnt++;
            }
            ans=max(ans,cnt+1);
        }
        return ans;
    }
};