class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        unordered_map<int,int> mp;
        int l=0;
        int ans=0;
        for(int r=0;r<n;r++){
            mp[s[r]]++;
            while(mp[s[r]] > 1){
                mp[s[l]]--;
                l++;
            }
            ans = max(ans,r-l+1);         
        }
        return ans;
    }
};