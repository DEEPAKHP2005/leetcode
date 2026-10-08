class Solution {
public:
    string removeOuterParentheses(string s) {
        int count=0;
        string ans;
        for(auto x : s){
            if(x==')'){
                count--;
            }
            if(count){
                ans.push_back(x);
            }
            if(x=='('){
                count++;
            }
            
        }
        return ans;
    }
};