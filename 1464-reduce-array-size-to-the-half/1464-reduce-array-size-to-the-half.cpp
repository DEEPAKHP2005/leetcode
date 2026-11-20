class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n = arr.size();
        priority_queue<pair<int,int>> pq;
        map<int,int> mp;
        for(auto x : arr){
            mp[x]++;
        }
        for(auto x : mp){
            pq.push({x.second, x.first});
        }
        int sum = 0;
        int count = 0;
        while(!pq.empty()){
            int f1 = pq.top().first;
            pq.pop();
            if(sum < n/2){
                sum += f1;
                count++;
            }
            else{
                return count;
            }
        }
        return count;
    }
};