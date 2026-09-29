class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        int F=-1;
        int L=-1;
        while(l<=r){
            int m = l+(r-l)/2;
            if(nums[m]>=target){
                if(nums[m]==target){
                    F=m;
                }
                r=m-1;
            }
            else {l=m+1;}
        }
        int low=0;
        int high=n-1;
        while(low<=high){
            int m = low + (high-low)/2;
            if(nums[m]<=target){
                if(nums[m]==target){
                    L=m;
                }
                low=m+1;
            }
            else {high=m-1;}
        }
        return {F,L};
    }
};