class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(auto x : nums){
            mp[x]++;
        }
        for(int i=1; ;i++){
            if(mp[i*k]==0){
                return i*k;
            }
        }
    }
};