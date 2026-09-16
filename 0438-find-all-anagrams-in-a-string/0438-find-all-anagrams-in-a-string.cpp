class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=s.size();
        int m=p.size();
        vector<int> sfreq(26, 0);
        vector<int> pfreq(26, 0);
        vector<int> ans;
        for(auto x : p){
            pfreq[x-'a']++;
        }
        int l=0;
        for(int r=0;r<n;r++){
            sfreq[s[r]-'a']++;
            if( r-l+1 > m){
                sfreq[s[l]-'a']--;
                l++;
            }
            if(r-l+1==m && pfreq==sfreq){
                ans.push_back(l);
            }
        }
        return ans;
        
    }
};