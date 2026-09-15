class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int Sum = 0;
        for(auto x : nums){
            Sum += x;
        }
        int count=0;
        int newSum=0;
        for(int i=0;i<nums.size()-1;i++){
            newSum += nums[i];
            Sum -= nums[i];
            if((Sum-newSum)%2==0){
                count++;
            }
        }
        return count;
    }
};