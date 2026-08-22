class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return function(nums, k) - function(nums, k-1);
    }
private:
    int function(vector<int>& nums, int k){
        vector<int> ans;
        for(auto x : nums){
            if(x%2==0) ans.push_back(0);
            else ans.push_back(1);
        }
        if(k < 0) return 0;
        int n=ans.size();
        int l=0;
        int sum=0;
        int count=0;
        for(int r=0;r<n;r++){
            sum += ans[r];
            while(sum > k){
                sum -= ans[l];
                l++;
            }
            count += (r-l+1);
        }
        return count;      
    }
};