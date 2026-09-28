class Solution {
public:
    int maxDepth(string s) {
        int maxCount=0;
        int counter=0;
        for(auto x : s){
            if(x=='(') counter++;
            if(x==')') counter--;
            maxCount=max(maxCount,counter);
        }
        return maxCount;
    }
};