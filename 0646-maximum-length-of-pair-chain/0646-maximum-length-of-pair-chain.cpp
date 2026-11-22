class Solution {
    bool static comp(vector<int>&a , vector<int>&b){
        return a[1] < b[1];
    }
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end(), comp);
        int n = pairs.size();
        int count = 1;
        int last = pairs[0][1];
        for(int i=1;i<n;i++){
            if(pairs[i][0] > last){
                last = pairs[i][1];
                count++;
            }
        }
        return count;
    }
};