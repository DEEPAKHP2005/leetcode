class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int ,int> mp;
        int a = 0;
        int b = 0;
        for(auto x : nums){
            mp[x]++;
        }
        for(auto x : mp){
            int i = x.second;
            if(i > 1){
                a += i / 2;
                b += i%2;
            }
            if(i==1){
                b += i;
            }
        }
        return {a,b};
    }
};