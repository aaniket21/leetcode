class Solution {
public:
    string smallestPalindrome(string s) {
       sort(s.begin(), s.end());

        string left, mid;

        for (int i = 0; i < s.size();) {
            int j = i;
            while (j < s.size() && s[j] == s[i]) j++;

            int cnt = j - i;
            left.append(cnt / 2, s[i]);
            if (cnt & 1) mid += s[i];

            i = j;
        }

        string ans = left;
        reverse(left.begin(), left.end());
        return ans + mid + left;
    }
};