class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        int n = piles.size();
        priority_queue<int> pq;
        for(int i=0;i<n;i++){
            pq.push(piles[i]);
        }
        while(k){
            int x = pq.top();
            pq.pop();
            pq.push(ceil(x/2.0));
            k--;
        }
        int ans = 0;
        while(!pq.empty()){
            ans += pq.top();
            pq.pop();
        }
        return ans;
    }
};