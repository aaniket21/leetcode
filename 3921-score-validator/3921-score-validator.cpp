class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int score=0,counter=0;
        for(auto event:events){
            if(counter==10)break;
            if(event=="W"){
                counter++;
            }else if(event=="WD"){
                score++;
            }else if(event=="NB"){
                score++;
            }else{
                int s=stoi(event);
                score+=s;
            }
        }
        return {score,counter};
    }
};