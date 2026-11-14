class Solution {
public:
    vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        int n = nums1.size();
        vector<pair<int, int>> v;
        for(int i=0;i<n;i++){
            v.push_back({nums2[i],i});
        }
        sort(v.begin(), v.end());
        vector<int> ans(n);
        int l = 0;
        int r = n-1;
        for(int i=n-1;i>=0;i--){
            int e = v[i].first;
            int ind = v[i].second;
            if(nums1[r] > e){
                ans[ind] = nums1[r];
                r--;
            }
            else{
                ans[ind]=nums1[l];
                l++;
            }
        }
        return ans;
    }
};