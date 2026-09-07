class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        vector<bool> isExe(128 , false);
        for(char x : jewels){
            isExe[x]=true;
        }
        int count=0;
        for(char y : stones){
            if(isExe[y]){
                count++;
            }
        }
        return count;
    }
};