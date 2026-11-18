class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int n = intervals.size();
        int l = intervals[0][0];
        int r = intervals[0][1];
        int count = 0;
        for(int i=1;i<n;i++){
            if(l <= intervals[i][0] && r >= intervals[i][1]){
                count++;
            }
            else if(l == intervals[i][0] && r < intervals[i][1]){
                r = intervals[i][1];
                count++;
            }
            else{
                l = intervals[i][0];
                r = intervals[i][1];
            }
        }
        return n - count;
    }
};