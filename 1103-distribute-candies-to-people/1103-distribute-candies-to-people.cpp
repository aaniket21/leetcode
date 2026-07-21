class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        int first = 1;
        int i = 0;
        vector<int> res(num_people, 0);
        while (candies != 0) {
            i = i % num_people;
            if (first < candies) {
                res[i] = res[i] + first;
                i++;
                candies -= first;
                first++;
            } else {
                res[i] = res[i] + candies;
                candies = 0;
            }
        }
        return res;
    }
};