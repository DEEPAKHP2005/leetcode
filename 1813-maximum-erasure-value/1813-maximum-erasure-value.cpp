class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        vector<int>freq(10001, 0);
        int n=nums.size();
        int h=0;
        long long maxSum=0;
        long long  sum=0;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
            sum += nums[i];
            while(freq[nums[i]]>1){
                freq[nums[h]]--;
                sum -= nums[h];
                h++;
            }
            maxSum = max(maxSum, sum);
        }
        return maxSum;
    }
};