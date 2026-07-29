class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words,
                                         char separator) {
        vector<string> ans;
        for (string s : words) {
            stringstream ss(s);
            string word;
            while (getline(ss, word, separator)) {
                if (!word.empty())
                    ans.push_back(word);
            }
        }
        return ans;
    }
};