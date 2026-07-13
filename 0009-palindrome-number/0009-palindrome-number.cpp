class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        string y = to_string(x);
        int n= y.size();
        for(int i=0;i<n;i++){
            if(y[i]!=y[(n-1)-i]) return false;
        }
        return true;
        
    }
};