class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        vector<int> nums;
        int sum=0;
        for(int i=0;i<n;i++){
            sum +=arr[i];
        }
        nums.push_back(sum);
        for(int i=3;i<=n;i=i+2){
           sum=0;
           for(int j=0;j<n;j++){
              sum +=arr[j];
              if(j>=i-1){
                nums.push_back(sum);
                sum -=arr[j-i+1];
              }

            }
           }
        int totalsum=0;
        for(int i=0;i<nums.size();i++){
            totalsum += nums[i];
        }
        return totalsum;
    }
};