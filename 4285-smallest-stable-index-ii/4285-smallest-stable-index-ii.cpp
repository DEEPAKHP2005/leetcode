class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1) return 0;
        vector<int> getMin(n , 0);
        int minEle=nums[n-1];
        for(int i=n-1;i>=0;i--){
            if(nums[i]<=minEle){
                getMin[i]=nums[i];
                minEle=nums[i];
            }
            else{
                getMin[i]=minEle;
            }
        }
        int maxEle=-1;
        for(int j=0;j<n;j++){
            if(nums[j] > maxEle){
                maxEle=nums[j];
                if(maxEle-getMin[j] <= k){
                    return j;
                    break;
                }
            }
            else {
                if(maxEle-getMin[j] <= k){
                    return j;
                    break;
                }
            }
        }
        return -1;
    }
};