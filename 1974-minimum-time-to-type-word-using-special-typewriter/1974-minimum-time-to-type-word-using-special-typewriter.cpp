class Solution {
public:
    int minTimeToType(string word) {
        int ans=0;
        char current='a';
        for(char c:word){
            int distance=abs(current-c);
            int path=min(distance,26-distance);
            ans+=path;
            ans+=1;
            current =c;
        }
        return ans;
    }
};