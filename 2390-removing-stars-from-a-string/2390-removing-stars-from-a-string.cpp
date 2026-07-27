class Solution {
public:
    string removeStars(string s) {
        //using stack :

        // stack<char>str;
        // for(auto c : s){
        //     if(c!='*'){
        //         str.push(c);
        //     }else{
        //         str.pop();
        //     }
        // }

        // string ans="";
        // while(!str.empty()){
        //     ans+=str.top();
        //     str.pop();
        // }
        // reverse(ans.begin(),ans.end());
        // return ans;

        //using string only : 

        string ans = "";
        for (auto c : s) {
            if (c == '*')
                ans.pop_back();
            else
                ans += c;
        }
        return ans;
    }
};