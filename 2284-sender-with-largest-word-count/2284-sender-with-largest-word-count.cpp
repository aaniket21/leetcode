class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        unordered_map<string, int> freq;
        for (int i = 0; i < senders.size(); i++) {
            stringstream ss(messages[i]);
            string word;
            int cnt = 0;

            while (ss >> word) {
                cnt++;
            }

            freq[senders[i]]=freq[senders[i]]+cnt;
        }

        string ans;
        int maxcnt=-1;

        for(auto n:freq){
            if(n.second>maxcnt){
                maxcnt=n.second;
                ans=n.first;
            }else if(n.second==maxcnt){
                ans=max(ans,n.first);
            }
        }

        return ans;
    }
};