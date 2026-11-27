class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
        sort(beans.begin(), beans.end());
        long long total = accumulate(begin(beans), end(beans), 0LL);;
        // for(const auto& x : beans){
        //     total += x;
        // }
        long long ans = LLONG_MAX;
        int n = beans.size();
        for(int i=0;i<n;i++){
            long long target = 1LL * beans[i] * (n-i);
            ans = min(ans, total-target);
        }
        return ans;
    }
};