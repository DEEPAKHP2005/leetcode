class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        unordered_map<char,int> mp;
        int l=0;
        int ans=0;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
            while(mp.size()==3){
               mp[s[l]]--;
               if (mp[s[l]] == 0)
               mp.erase(s[l]);
               l++;
               ans += n-i;
            }
        }
        return ans;
    }

}; 