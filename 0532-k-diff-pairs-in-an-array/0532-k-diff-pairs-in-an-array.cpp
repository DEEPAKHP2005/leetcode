class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mp;
        sort(nums.begin(), nums.end());
        int count = 0;
        int zerocounter=0;
        for(auto x : nums){
            mp[x]++;
        }
        for(auto x : mp){
            if(x.second>=2){
                zerocounter++;
            }
        }
        for(int i=0;i<n;i++){
            int x = nums[i]-k;
            if(mp.find(x)!=mp.end()){
                count++;
                mp.erase(x);
            }
        }
        if(k==0){
            return zerocounter;
        }
        return count;


    }
};

