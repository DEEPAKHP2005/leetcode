class Solution {
public:
    int minAddToMakeValid(string s) {
        int count = 0;
        int ans=0;
        for(auto x : s){
            if(x == '('){
                count++;
            }
            else{
                count--;
            }
            if(count < 0)  {
                ans++;
                count = 0;
            }
        }
        if(count > 0){
                ans += count;
            }
        return ans;
        
    }
};