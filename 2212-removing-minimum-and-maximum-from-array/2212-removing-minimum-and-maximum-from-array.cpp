class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int minIndex=0;
        int mn=INT_MAX;
        int mx=INT_MIN;
        int maxIndex=0;
        for(int i=0;i<n;i++){
            if(nums[i] < mn ){
                mn=nums[i];
                minIndex=i;
            }
            if(nums[i] > mx ){
                maxIndex=i;
                mx=nums[i];
            }
        }
        int front=max(minIndex, maxIndex) + 1;
        int back=n - min(minIndex, maxIndex);
        int both=min(minIndex, maxIndex) + 1
                 + n - max(minIndex, maxIndex);
        return min({front,back,both});
    }
};