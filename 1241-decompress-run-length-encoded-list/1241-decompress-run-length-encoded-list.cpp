class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> a;
        int n=nums.size();
        int l=0;
        int r=1;
        while(r<n){
            for(int i=0;i<nums[l];i++){
                a.push_back(nums[r]);
            }
            l=l+2;
            r=r+2;
        }
        return a;
    }
};