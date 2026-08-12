class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n=nums.size();
        vector<int> arr;
        for(auto x : nums){
            mp[x]++;
            if(mp[x]==n/3 + 1){
                arr.push_back(x);
            } 
        }
        return arr;
       
    }
};