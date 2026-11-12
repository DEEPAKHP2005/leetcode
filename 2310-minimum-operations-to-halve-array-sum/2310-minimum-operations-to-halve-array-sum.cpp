class Solution {
public:
    int halveArray(vector<int>& nums) {
        double sum = 0;
        priority_queue<double> pq;
        for(auto x : nums){
            sum += x;
            pq.push(x);
        }
        double x = 0;
        int count = 0;
        while(x < sum/2){
            double y = pq.top();
            pq.pop();
            x += y / 2;
            pq.push(y/2);
            count++;
        }
        return count;
    }
};