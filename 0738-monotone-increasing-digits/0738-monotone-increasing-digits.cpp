class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        string s = to_string(n);
        int m = s.size();
        string ans = "";
        int mark = m;
        for(int i=m-2;i>=0;i--){
            if(s[i] > s[i+1]){
                s[i]--;
                mark = i+1;
            }
        }
        for(int i=mark;i<m;i++){
            s[i] = '9';
        }
        return stoi(s);;
    }
};