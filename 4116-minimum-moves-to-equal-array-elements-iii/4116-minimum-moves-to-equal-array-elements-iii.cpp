class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi = 0;
        for(auto x : nums){
            maxi = max(maxi, x);
        }
        int count = 0;
        for(auto x : nums){
            count += (maxi-x);
        }
        return count;
    }
};