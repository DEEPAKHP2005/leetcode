class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> mp1;
        int l=0;
        int r=0;
        int len=0;
        while(r<nums.size()){
            mp1[nums[r]]++;
            while(mp1[nums[r]]>k){
               mp1[nums[l]]--;
               l++;
            }
            len=max(len,r-l+1);
            r++;

        }
        return len;
    }
};