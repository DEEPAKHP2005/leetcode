class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int mx = INT_MIN;
        int mn = INT_MAX;
        int count = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            mx = max(mx, nums[i]);
            mn = min(mn, nums[i]);
            if(mx - mn > k){
                count++;
                mx = nums[i];
                mn = nums[i];
            }
        }
        if((mx - mn)<= k) count++;
        return count;
    }
};