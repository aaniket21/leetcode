class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n, -1));
        vector<pair<int,int>> dir = {{0,1}, {1,0}, {0,-1}, {-1,0}};
        
        int start = 0;
        int row = 0, col = 0;
        int totalElements = n * n;
        
        for (int k = 0; k < totalElements; k++) {
            matrix[row][col]=k+1;
            
            int next_row = row + dir[start].first;
            int next_col = col + dir[start].second;
            
            if (next_row < 0 || next_row >= n || next_col < 0 || next_col >= n || matrix[next_row][next_col]!=-1 ){
                start = (start + 1) % 4; 
                next_row = row + dir[start].first;
                next_col = col + dir[start].second;
            }
            
            row = next_row;
            col = next_col;
        }
        
        return matrix;
    }
};