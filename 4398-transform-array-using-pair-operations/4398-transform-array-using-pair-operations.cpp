class Solution {
public:
    bool canTransform(vector<int>& source, vector<int>& target) {
        long long sum1 = 0;
        long long sum2 = 0;
        for(auto x : source){
            sum1 += x;
        }
        for(auto x : target){
            sum2 += x;
        }
        return sum1 == sum2;
    }
};