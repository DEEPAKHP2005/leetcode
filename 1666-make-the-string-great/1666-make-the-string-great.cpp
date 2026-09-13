class Solution {
public:
    string makeGood(string s) {
        int n=s.size();
        stack<int> st;
        string ans="";
        for(auto ch : s){
            if (!st.empty() && abs(st.top() - ch) == 32) {
                st.pop();}
                else {st.push(ch);}}
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};