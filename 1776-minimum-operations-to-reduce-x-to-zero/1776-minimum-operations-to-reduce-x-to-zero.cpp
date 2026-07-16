class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int leftsum =0;
        int left = 0;
        int ans=-1;
        int sum = 0;
        for(int i=0;i<n;i++){
            sum +=nums[i];
        }
        int total = sum - x;
        if(total < 0) return -1;
        if(total == 0) return n;
        for(int j=0;j<n;j++){
            leftsum += nums[j];
            while(leftsum>total){
                 leftsum -= nums[left];
                 left++;
            }
            if(leftsum == total){
            ans = max(ans, (j-left+1));
            }
        }
        if(ans == -1){
            return -1;
            }
        else return n-ans;    
    }
};