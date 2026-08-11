class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto x : nums){
            mp[x]++;
        }
        int sum=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i] == nums[i - 1] + 1){
                sum += nums[i];
            }
            else break;
        }
        for(int i=sum;i<=50;i++){
            if(mp.count(sum)==0) return sum;
            else sum++;
        }
        return sum;
    }
};