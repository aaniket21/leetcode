class Solution {
public:
    int maxScore(string s) {
        int ans=0;
        int oneCount=0;
        
        for(char c:s){
            if(c=='1'){
                oneCount++;
            }
        }
        int left=0,right=oneCount;

        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='0'){
                left++;
            }else{
                right--;
            }
            ans=max(ans,left+right);
        }

        return ans;
    }
};