class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp.clear();
            for(int j=i;j<n;j++){
                mp[nums[j]]++;
                arr.push_back(mp.size());
            }
        }
        int sum =0;
        for(auto x : arr){
            sum += x*x;
        }
        return sum;
    }
};