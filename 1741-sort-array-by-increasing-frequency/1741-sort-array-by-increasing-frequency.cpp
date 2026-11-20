class Solution {
     static bool comp(const pair<int,int>& a,
                 const pair<int,int>& b){
    if(a.second == b.second){
        return a.first > b.first;
    }
    return a.second < b.second;
}
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto x : nums){
            mp[x]++;
        }
        vector<pair<int,int>> v(mp.begin(), mp.end());
        sort(v.begin(), v.end(), comp);
        int n = v.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            while(v[i].second){
                ans.push_back(v[i].first);
                v[i].second--;
            }
        }
        return ans;
    }
};