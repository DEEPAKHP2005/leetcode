class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        string a="";
        priority_queue<pair<int,char>> pq;
        for(auto x : s){
            mp[x]++;
        }
        for(auto x : mp){
            pq.push({x.second, x.first});
        }
        while(!pq.empty()){
            a += string(pq.top().first , pq.top().second);
            pq.pop();
        }
        return a;
    }
};