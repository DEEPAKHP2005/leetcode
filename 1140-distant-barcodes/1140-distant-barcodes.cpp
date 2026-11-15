class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        int n = barcodes.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[barcodes[i]]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto x : mp){
            pq.push({x.second , x.first});
        }
        vector<int> ans;
        while(pq.size()>=2){
            int freq1 = pq.top().first;
            int val1 = pq.top().second;
            pq.pop();
            int freq2 = pq.top().first;
            int val2 = pq.top().second;
            pq.pop();
            if(freq1-1 > 0){
             pq.push({freq1-1,val1});
            }

            if(freq2-1 > 0){
                pq.push({freq2-1,val2});
            }
            ans.push_back(val1);
            ans.push_back(val2);
        }
        if(!pq.empty()){
            ans.push_back(pq.top().second);
        }
        return ans;
    }
};