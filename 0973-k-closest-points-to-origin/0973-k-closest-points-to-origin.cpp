class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, vector<int>>, vector<pair<int, vector<int>>>,
                       greater<pair<int, vector<int>>>>
            close;

        for (int i = 0; i < points.size(); i++) {
            int cal =
                (points[i][0] * points[i][0]) + (points[i][1] * points[i][1]);
            close.push({cal,{points[i][0],points[i][1]}});
        }

        vector<vector<int>>ans;
        
        while(k){
                ans.push_back(close.top().second);
                close.pop();
                k--;
        }

        return ans;
        }
    };