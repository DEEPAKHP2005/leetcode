class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int n = answerKey.size();
        int l=0;
        int r=0;
        int ans = 0;
        int countF=0;
        int countT=0;
        while(r<n){
            if(answerKey[r]=='T') countT++;
            else countF++;
            while(countT>k && countF>k){
                if(answerKey[l]=='T') countT--;
                else countF--;
                l++;
            }
            ans = max(ans,r-l+1);
            r++;
        }
        return ans;
        
    }
};