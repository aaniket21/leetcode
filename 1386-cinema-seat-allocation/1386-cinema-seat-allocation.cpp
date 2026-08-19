class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int, vector<int>> arr;
        
        for (auto i : reservedSeats) {
            if (arr.find(i[0] - 1) == arr.end()) {
                arr[i[0] - 1] = vector<int>(10, 0);
            }
            arr[i[0] - 1][i[1] - 1] = 1;
        }
        
        int cnt = (n - arr.size()) * 2;
        for (auto const& pair : arr) {
            const vector<int>& row = pair.second;
            
            bool left = (row[1] == 0 && row[2] == 0 && row[3] == 0 && row[4] == 0);
            bool right = (row[5] == 0 && row[6] == 0 && row[7] == 0 && row[8] == 0);
            bool middle = (row[3] == 0 && row[4] == 0 && row[5] == 0 && row[6] == 0);
            
            if (left && right) {
                cnt += 2;
            } else if (left || right || middle) {
                cnt += 1;
            }
        }
        
        return cnt;
    }
};