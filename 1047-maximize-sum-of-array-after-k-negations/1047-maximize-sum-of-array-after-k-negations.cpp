class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for(auto x : nums){
            pq.push(x);
        }
        int sum = 0;
        while(k > 0){
            int a = pq.top();
            pq.pop();
            pq.push(-a);
            k--;
        }
        while(!pq.empty()){
            int a = pq.top();
            sum += a;
            pq.pop();
        }
        return sum;
    }
};