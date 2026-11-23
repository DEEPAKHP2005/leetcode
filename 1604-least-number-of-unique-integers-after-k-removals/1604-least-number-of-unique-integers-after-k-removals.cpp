class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        for(auto x : arr){
            mp[x]++;
        }
        vector<int> ans;
        for(auto x : mp){
            ans.push_back(x.second);
        }
        sort(ans.begin(),ans.end());
        int n = ans.size();
        for(int i=0;i<n;i++){
            if(k!=0 && ans[i]<=k){
                k -= ans[i];
            }
            else{
                return n-i;
            }
        }
        return 0;
    }
};