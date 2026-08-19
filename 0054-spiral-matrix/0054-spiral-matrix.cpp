class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        vector<vector<int>> visited(m, vector<int>(n, 0));
        vector<pair<int,int>> dir = {{0,1}, {1,0}, {0,-1}, {-1,0}};
        
        int start = 0;
        int row = 0, col = 0;
        vector<int> ans;
        int totalElements = m * n;
        
        for (int k = 0; k < totalElements; k++) {
            ans.push_back(matrix[row][col]);
            visited[row][col] = 1;
            
            int next_row = row + dir[start].first;
            int next_col = col + dir[start].second;
            
           
            if (next_row < 0 || next_row >= m || next_col < 0 || next_col >= n || visited[next_row][next_col] == 1) {
                start = (start + 1) % 4; 
                next_row = row + dir[start].first;
                next_col = col + dir[start].second;
            }
            
            row = next_row;
            col = next_col;
        }
        
        return ans;
    }
};