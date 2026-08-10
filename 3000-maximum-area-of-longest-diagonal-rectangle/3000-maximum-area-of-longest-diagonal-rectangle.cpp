class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int area=-1;
        auto diagonal=0;

        for(auto r:dimensions){
            auto calculate=(r[0]*r[0])+(r[1]*r[1]);
            if (calculate > diagonal) {
                diagonal = calculate;
                area = r[0] * r[1]; 
            } else if (calculate == diagonal) {
                area = max(area, r[0] * r[1]);
            }
        }
        return area;
    }
};