class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int count = 0;
        int l = 0;
        int r = n-1;
        while(l<r){
            int sum = nums[l] + nums[r];
            if(sum == k){
                count++;
                l++;
                r--;
            }
            else if(sum < k){
                l++;
            }
            else{
                r--;
            }
        }
        return count;
    }
};