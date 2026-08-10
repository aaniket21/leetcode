class Solution {
public:
    int fillCups(vector<int>& amount) {
        int sum = 0;
        int max_val = 0;

        for (int n : amount) {
            sum += n;
            max_val = max(max_val, n);
        }

        return max(max_val, (sum + 1) / 2);
    }
};