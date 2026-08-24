class Solution {
public:
    string generateTheString(int n) {
        string ans;
        if(n%2!=0) ans=string(n,'a');
        else ans=string(n-1,'a')+"b";

        return ans;
    }
};