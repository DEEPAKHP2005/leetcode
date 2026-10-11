class Solution {
public:
    string removeStars(string s) {
        stack<int> st;
        for(int i=0;i<s.size();i++){
            if(!st.empty() && s[i]=='*'){
                st.pop();
            }
            if(s[i]!='*'){
            st.push(s[i]);
            }
        }
        string a = "";
        while(!st.empty()){
            a += st.top();
            st.pop();
        }
        reverse(a.begin(),a.end());
        return a;
    }
};