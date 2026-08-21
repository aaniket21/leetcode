class Solution {
public:
    int encrypt(int x) {
    string s = to_string(x);
    char max_digit = *max_element(s.begin(), s.end());
    string encryptedStr(s.length(), max_digit);
    return stoi(encryptedStr);
}
    int sumOfEncryptedInt(vector<int>& nums) {
        int ans=0;
        for(auto n:nums){
            ans+=encrypt(n);
        }

        return ans;
    }
};