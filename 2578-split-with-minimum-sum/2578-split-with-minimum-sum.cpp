class Solution {
public:
    int splitNum(int num) {
        string n=to_string(num);
        sort(n.begin(),n.end());

        string num1="";
        string num2="";

        for(int i=0;i<n.size();i++){
            if(i%2==0)num1+=n[i];
            else num2+=n[i];
        }
        
        return stoi(num1)+stoi(num2);
    }
};