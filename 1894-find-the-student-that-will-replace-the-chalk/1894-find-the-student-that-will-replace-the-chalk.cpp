class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long sum=0;
        for(auto n:chalk){
            sum+=n;
        }
        k=k%sum;
        int i=0;
        while(k>=chalk[i]){
            k-=chalk[i];
            i++;
        }   
        return i;
    }
};