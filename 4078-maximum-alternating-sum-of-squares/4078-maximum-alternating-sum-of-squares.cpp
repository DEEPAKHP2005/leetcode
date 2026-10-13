class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr;
        for(int i=0;i<nums.size();i++){
            arr.push_back(abs(nums[i]));
        }
        sort(arr.begin(), arr.end(), greater<int>());
        if(n%2 !=0){
            arr.push_back(0);
        }
        long long a = 0;
        long long b = 0;
        int m = arr.size();
        for(int i=0;i<m/2;i++){
            a += 1LL * arr[i]*arr[i];
            b += 1LL * arr[(m/2) + i]*arr[(m/2) + i];
        }
        return a-b;
    }
};