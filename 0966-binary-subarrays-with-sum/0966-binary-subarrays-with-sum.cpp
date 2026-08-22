class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return sumk(nums , goal) - sumk(nums , goal-1);
    }
private:
    int sumk(vector<int>& nums ,int goal){
        if(goal < 0) return 0;
        int n=nums.size();
        int l=0;
        int sum=0;
        int count=0;
        for(int r=0;r<n;r++){
            sum += nums[r];
            while(sum > goal){
                sum -= nums[l];
                l++;
            }
            count += (r-l+1);
        }
        return count;      
    }
};