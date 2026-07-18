class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        int minele=INT_MAX;
        int maxele=INT_MIN;
        for(int i=0;i<n;i++){
            minele=min(nums[i],minele);
            maxele=max(nums[i],maxele);
        }
        return gcd(maxele,minele);
        
    }
};