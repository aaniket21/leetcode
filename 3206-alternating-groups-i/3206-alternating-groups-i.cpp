class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int cnt = 0;
        int n = colors.size();

        // for (int i = 0; i < n; i++) {
        //     if (i == 0) {
        //         if (colors[n - 1] == colors[i + 1] &&
        //             colors[i + 1] != colors[i]) {
        //             cnt++;
        //         }
        //     } else if (i == n - 1) {
        //         if (colors[i - 1] == colors[0] &&
        //             colors[0] != colors[i]) {
        //             cnt++;
        //         }
        //     } else {
        //         if (colors[i - 1] == colors[i + 1] &&
        //             colors[i + 1] != colors[i]) {
        //             cnt++;
        //         }
        //     }
        // }

        for (int i = 0; i < n; i++) {
            int left = (i - 1 + n) % n;
            int right = (i + 1) % n;

            if (colors[left] == colors[right] && colors[right] != colors[i]) {
                cnt++;
            }
        }

        return cnt;
    }
};