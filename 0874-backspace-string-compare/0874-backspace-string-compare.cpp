class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<int> st;
        for(int i=0;i<s.size();i++){
            if(!st.empty() && s[i]=='#'){
                st.pop();
            }
            if(s[i]!='#'){
            st.push(s[i]);
            }
        }
        string a = "";
        while(!st.empty()){
            a += st.top();
            st.pop();
        }
        stack<int> St;
        for(int i=0;i<t.size();i++){
            if(!St.empty() && t[i]=='#'){
                St.pop();
            }
            if(t[i]!='#'){
            St.push(t[i]);
            }
        }
        string b = "";
        while(!St.empty()){
            b += St.top();
            St.pop();
        }
        return a == b;
    }
};