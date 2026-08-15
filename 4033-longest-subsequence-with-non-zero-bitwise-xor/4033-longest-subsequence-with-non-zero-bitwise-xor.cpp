class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int ans=0;
        int count=0;
        int n=nums.size();
        for(auto x : nums){
            if(x==0) count++;
            ans^=x;
        }
        if(count== n) return 0;
        if(ans!=0) return n;
        else return n-1;
    }
};