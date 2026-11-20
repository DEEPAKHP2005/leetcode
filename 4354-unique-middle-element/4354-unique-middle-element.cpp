class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size();
        if(n == 1){
            return true;
        }
        int m = nums[n/2];
        int count = 0;
        for(auto x : nums){
            if(x==m){
                count++;
            }
        }
        return count==1;
    }
};