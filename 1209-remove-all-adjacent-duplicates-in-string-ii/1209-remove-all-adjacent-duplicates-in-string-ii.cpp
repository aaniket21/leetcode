class Solution {
public:
    string removeDuplicates(string s, int k) {
        // string ans="";
        // int cnt=1; 
        // for(int i=0;i<s.size();i++){
        //     if(ans.empty())ans+=s[i];
        //     else if(s[i-1]==s[i]){
        //         ans+=s[i];
        //         cnt++;

        //         if(cnt==k){
        //             ans.erase(ans.size()-k);
        //             cnt=1;
        //         }     
        //     }else{
        //         ans+=s[i];
        //         cnt=1;
        //     }
        // }

        stack<pair<char,int>>st;
        for(auto c:s){
            if(st.empty() || st.top().first!=c){
                st.push({c,1});
            }else{
                st.top().second++;
                if(st.top().second==k){
                    st.pop();
                }
            }
        }
        string ans="";
        while(!st.empty()){
            ans.append(st.top().second, st.top().first);
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};