class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());
        int newPower = power;
        int n = tokens.size();
        int i = 0;
        int j = n-1;
        int score = 0;
        int maxScr = 0;
        while(i<=j){
            if(tokens[i]<=newPower){
                score++;
                maxScr = max(maxScr, score);
                newPower -= tokens[i];
                i++;
            }
            else if(tokens[i] > newPower && score > 0){
                    score -= 1;
                    newPower += tokens[j];
                    j--;
            }
            else{
                break;
            }

        }
        return maxScr;
    }
};