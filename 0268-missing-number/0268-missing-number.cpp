class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 1;
        sort(nums.begin(),nums.end());
        if(nums[n-1]==(n-1)) return n;
        int low=0;
        int high =n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>mid){
                high=mid-1;
            }
            else low=mid+1;
        }
        return low;
        
    }
};