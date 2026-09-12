class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> mp;
        string ans = "";
        for(auto x : s){
            mp[x]++;
        }
        for(auto y : order){
            while(mp[y]> 0){
                ans += y;
                mp[y]--;
            }
        }
        for(auto y : s){
            if(mp[y]> 0){
                ans += y;
                mp[y]--;
            }
        }
        return ans;
    }
};