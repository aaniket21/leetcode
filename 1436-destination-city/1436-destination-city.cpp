class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        // string source="",des="";
        // for(auto s:paths){
        //     if (source.empty() && des.empty()) {
        //         source = s[0];
        //         des = s[1];        
        //     }
        //     else if (des == s[0]) { 
        //         source = des;
        //         des = s[1];
        //     }
        // }
        // return des;

        unordered_set<string> source;

        for (auto &p : paths)
            source.insert(p[0]);

        for (auto &p : paths)
            if (!source.count(p[1]))
                return p[1];

        return "";
    }
};