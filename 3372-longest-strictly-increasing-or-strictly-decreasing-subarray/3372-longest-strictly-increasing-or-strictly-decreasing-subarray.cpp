class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int maxLen = 0;
        int n = nums.size();
        int inc = 0;
        for(int i=0;i<n;i++){
            int len =0;
            for(int j=i+1;j<n;j++){
                if(nums[j]>nums[j-1]) len++;
                else{
                    break;
                }
                inc = max(inc, len);

            }
            int Len = 0;
            for(int j=i+1;j<n;j++){
                if(nums[j]<nums[j-1]) Len++;
                else{
                    break;
                }
                inc = max(inc, Len);
                
            }

        }
        return inc + 1;;

    }
};