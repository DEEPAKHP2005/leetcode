class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        vector<long long> ans;
        if(finalSum % 2 !=0){
            return ans;
        }
        long long num = 2;
        long long sum = 0;
        while(sum + num <= finalSum){
            ans.push_back(num);
            sum += num;
            num += 2;
            if(sum == finalSum){
                return ans;
            }
        }
        int n = ans.size();
        long long add = finalSum - sum;
        ans[n-1] = ans[n-1] + add;
        return ans;
    }
};