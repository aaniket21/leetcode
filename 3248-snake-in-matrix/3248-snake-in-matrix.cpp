class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        unordered_map<string, pair<int, int>> dir= {
            {"DOWN", {1, 0}}, {"UP", {-1, 0}}, {"RIGHT", {0, 1}},
            {"LEFT", {0, -1}}};
        
        int i=0,j=0;
        for(auto c : commands){
            auto pos=dir[c];
            i+=pos.first;
            j+=pos.second;
        }

        return (i*n)+j;
    }
};