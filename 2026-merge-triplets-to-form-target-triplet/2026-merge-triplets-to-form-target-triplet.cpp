class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        int first = 0;
        int second = 0;
        int third = 0;
        for(auto x : triplets){
            if(x[0]<=target[0] && x[1] <= target[1] && x[2] <= target[2]){
            first = max(first, x[0]);
            second = max(second, x[1]);
            third = max(third, x[2]);
            }
        }
        return first==target[0] && second == target[1] && third == target[2];
    }
};