class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int Tsum=0;
        for(auto x : cardPoints){
            Tsum += x;
        }
        if(n==k) return Tsum;
        int Wsum=0;
        int l=0;
        int ans=0;
        for(int r=0;r<n;r++){
            Wsum += cardPoints[r];
            if((r-l+1)==(n-k)){
                ans=max(ans,(Tsum-Wsum));
                Wsum -= cardPoints[l];
                l++;
            }
        }
        return ans;
    }
};