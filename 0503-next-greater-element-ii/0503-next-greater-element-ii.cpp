class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr;
        vector<int> ans(n);
        for(int i=2*n-1;i>=0;i--){
            while(!arr.empty() && nums[arr.back()]<=nums[i%n]){
                arr.pop_back();
            }
            if(i<n){
                ans[i]=arr.empty() ? -1 : nums[arr.back()];
            }
            arr.push_back(i%n);
        }
        return ans;
    }
};