class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int j = 0;
        long long sum = 0;
        int ans = 0;
        for(int i=0;i<n;i++){
            long long  target = nums[i];
            sum += target;
            if(k >= target*(i-j+1)-sum){
                ans=max(i-j+1, ans);
            }
            else{
                sum -= nums[j];
                j++;
            }
        }
        return ans;
    }
};