class Solution {
public:
    static bool comp(vector<int>& a1, vector<int>& b1){
        return a1[1] < b1[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size();
        sort(points.begin(), points.end(), comp);
        int count = 1;
        int width = points[0][1];
        for(int i=1;i<n;i++){
            if(points[i][0] > width){
                count++;
                width = points[i][1];
            }
        }
        return count;
    }
};