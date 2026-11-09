class Solution {
public:
    int balancedStringSplit(string s) {
        int countR = 0;
        int countL = 0;
        int a =0;
        for(auto x : s){
            if(x=='R'){
                countR++;
            }
            else{
                countL++;
            }
            if(countR==countL){
                a++;
                countR = 0;
                countL = 0;
            }
        }
        return a;
    }
};