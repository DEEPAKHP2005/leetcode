class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long sum = 0;
        int n = nums.size();
        long long Mxsum = INT_MIN;
        for(int i=0;i<n;i++){
            sum += nums[i];
            Mxsum = max(Mxsum, sum);
            if(sum < 0){
                sum = 0;
            }
        }
        return Mxsum;
    }
};