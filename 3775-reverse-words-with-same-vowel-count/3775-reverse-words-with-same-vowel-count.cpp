class Solution {
public:
    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }

    int countVowels(string& word) {
        int cnt = 0;
        for (char ch : word) {
            if (isVowel(ch))
                cnt++;
        }
        return cnt;
    }

    string reverseWords(string s) {
        stringstream ss(s);
        vector<string> words;
        string word;

        while (ss >> word) {
            words.push_back(word);
        }

        int target = countVowels(words[0]);

        for (int i = 1; i < words.size(); i++) {
            if (countVowels(words[i]) == target) {
                reverse(words[i].begin(), words[i].end());
            }
        }

        string ans = "";
        for (int i = 0; i < words.size(); i++) {
            ans += words[i];
            if (i != words.size() - 1)
                ans += " ";
        }

        return ans;
    }
};