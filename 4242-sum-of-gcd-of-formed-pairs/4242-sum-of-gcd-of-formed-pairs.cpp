class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        int maxnum=0;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
               maxnum = max(maxnum, nums[i]);
                arr[i]=(gcd(nums[i],maxnum));
               }
        sort(arr.begin(),arr.end());
        long long ans =0;
        for(int i=0;i<n/2;i++){
            ans += gcd(arr[i],arr[n-i-1]);
        }
        return ans;
    }
};