class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n = s.size();
        int j=0;
        long sum = 0;
        int ans = 0;
        for(int i=0;i<n;i++){
            long cost = abs(s[i]-t[i]);
            sum += cost;
            if(maxCost <  sum){
                sum -=  abs(s[j]-t[j]);
                j++;
            }
            ans = max(ans, i-j+1);
        }
        return ans;
    }
};