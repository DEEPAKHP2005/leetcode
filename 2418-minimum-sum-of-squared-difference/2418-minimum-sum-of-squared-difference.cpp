class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int n = nums1.size();
        vector<long long> freq(100001, 0);
        long long sum = 0;

        for(int i = 0; i < n; i++){
            long long num = abs(nums1[i] - nums2[i]);
            freq[num]++;
            sum += num * num;
        }

        long long k = 1LL * k1 + k2;

        for(int i = 100000; i > 0 && k > 0; i--){
            long long f = min(k, freq[i]);

            sum -= f * i * i;
            sum += f * (i-1) * (i-1);

            freq[i] -= f;
            freq[i-1] += f;

            k -= f;
        }

        return sum;
    }
};