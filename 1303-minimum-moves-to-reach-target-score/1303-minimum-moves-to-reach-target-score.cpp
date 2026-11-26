class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int ans = 0;
        if(maxDoubles==0){
            return target-1;
        }
        while(target > 1){
            if(maxDoubles==0){
            return (ans + target - 1);
            
            }
            else if(target % 2 == 0){
                ans++;
                target /= 2;
                maxDoubles--;
            }
            else{
                ans++;
                target--;
            }
        }
        return ans;
    }
};