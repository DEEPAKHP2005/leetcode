class Solution {
public:
    bool checkValidString(string s) {
        int Mn = 0;
        int Mx = 0;
        int n = s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                Mn++;
                Mx++;
            }
            else if(s[i]==')'){
                Mn--;
                Mx--;
            }
            else{
                Mn--;
                Mx++;
            }
            if(Mn < 0) Mn = 0;
            if(Mx < 0) return false;
        }
        return Mn==0;
    }
};