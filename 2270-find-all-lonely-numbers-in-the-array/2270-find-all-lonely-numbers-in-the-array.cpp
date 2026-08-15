class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n=nums.size();
        for(auto x : nums){
            mp[x]++;
        }
        vector<int> arr;
        for(int i=0;i<n;i++){
            if(mp[nums[i]]==1 && mp.count(nums[i]-1)==0 && mp.count(nums[i]+1)==0){
                arr.push_back(nums[i]);
            }
        }
        return arr;
    }
};