class Solution {
public:
    string reverseStr(string s, int k) {
        bool flag = true;
        int i = 0;

        while (i < s.size()) {
            if (flag) {
                reverse(s.begin() + i, s.begin() + min(i + k, (int)s.size()));
            }
            flag = !flag;
            i += k;
        }

        return s;
    }
};