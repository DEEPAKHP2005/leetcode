class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int mn = nums[0];
        int count = 1;
        int n = nums.size();
        for(int i=0;i<n;i++){
            
            if(nums[i] - mn > k){
                count++;
                mn = nums[i];
            }
        }
        return count;
    }
};