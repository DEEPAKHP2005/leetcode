class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n =  nums.size();
        int a = INT_MAX;
        if(k==1){
            return 0;
        }
        for(int i=0;i<=n-k;i++){
        
            a = min(nums[i+k-1]-nums[i],a);
        }
        return a;
    }
};