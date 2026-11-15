class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int> mp;
        for(auto x : s){
            mp[x]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto y : mp){
            pq.push({y.second,y.first});
        }
        string ans="";
        while(pq.size()>=2){
            int f1 = pq.top().first;
            char c1 = pq.top().second;
            pq.pop();
            int f2 = pq.top().first;
            char c2 = pq.top().second;
            pq.pop();
            if(f1-1 > 0){
                pq.push({f1-1, c1});
            }
            if(f2-1 > 0){
                pq.push({f2-1, c2});
            }
            ans += c1;
            ans += c2;
        }
        if(!pq.empty()){
            if(pq.top().first > 1){
                return "";
            }
            ans += pq.top().second;
        }
        return ans;
    }
};