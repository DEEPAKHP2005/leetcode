class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(m!=n) return false;
        unordered_map<char,int> mp;
        for(auto x : s){
           mp[x]++;
        }
        for(int i=0;i<m;i++){
            mp[t[i]]--;
            if(mp[t[i]]==0){
                mp.erase(t[i]);
            }
        }
        if(mp.empty()){
            return true;
        }
        return false;
    }
};