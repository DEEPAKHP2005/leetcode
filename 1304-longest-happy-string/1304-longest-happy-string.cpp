class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int , char>> pq;
        if(a>0)pq.push({a,'a'});
        if(b>0)pq.push({b,'b'});
        if(c>0)pq.push({c,'c'});
        string ans ="";
        while(pq.size()>=2){
            int f1 = pq.top().first;
            char c1 = pq.top().second;
            pq.pop();
            int f2 = pq.top().first;
            char c2 = pq.top().second;
            pq.pop();
            if(f1>=2){
                ans += string(2,c1);
                f1 = f1-2;
            }
            else{
                ans += c1;
                f1--;
            }
            if(f2>=2 && f2>=f1){
                ans += string(2,c2);
                f2 = f2-2;
            }
            else{
                ans += c2;
                f2--;
            }
            if(f1>0){
                pq.push({f1,c1});
            }
            if(f2>0){
                pq.push({f2,c2});
            }
        }
        if(pq.empty()){
            return ans;
        }
        else{
            int f1 = pq.top().first;
            char c1 = pq.top().second;
            if(f1 >= 2){
                ans += string(2,c1);
            }
            else{
                ans += c1;
            }
        }
        return ans;
    }
};