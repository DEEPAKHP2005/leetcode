class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n=nums.size();
        long long sum=0;
        long long halfSum=0;
        int count=0;
        for(int i=0;i<n;i++){
            sum += nums[i];
            if(i<n/2){
                halfSum += nums[i];
            }
        }
        for(int i=0;i<n;i++){
            if(halfSum > sum - halfSum) count++;
            halfSum -= nums[i];
            halfSum += nums[(i + n/2)% n];
        }
        return count;
    }
};