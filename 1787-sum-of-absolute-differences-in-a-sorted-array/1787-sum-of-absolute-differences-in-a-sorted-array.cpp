class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size();
        int preSum=0;
        int sufSum=0;
        vector<int> pre(n);
        vector<int> suf(n);
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            preSum += nums[i];
            pre[i]=preSum;
            sufSum += nums[n-i-1];
            suf[n-i-1] = sufSum;
        }
        for(int i=0;i<n;i++){
            if(i==0){
                ans[i]=suf[i+1]-nums[i]*(n-i-1);
            }
            else if(i==n-1){
                ans[i]=(nums[i]*i-pre[i-1]);
            }
            else 
            ans[i]=(nums[i]*i-pre[i-1])+(suf[i+1]-nums[i]*(n-i-1));
        }
        return ans;
    }
};