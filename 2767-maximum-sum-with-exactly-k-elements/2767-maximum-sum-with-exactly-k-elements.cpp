class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int a = 0;
        for(auto x : nums){
            a = max(a,x);
        }
        int sum = 0;
        while(k > 0){
            sum += a;
            a = a+1;
            k--;
        }
        return sum;
    }
};