class Solution {
public:
    int numberOfSubstrings(string s, int k) {
        unordered_map<char, int> mp;
        int n = s.size();
        int l = 0;
        int r = 0;
        int count = 0;
        while(r<n){
            mp[s[r]]++;
            while(mp[s[r]] >=k){
                count += n-r;
                mp[s[l]]--;
                l++;
            }
            r++;
        }
        return count;
    }
};