class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<int> start, end;
        for(auto x : intervals){
            start.push_back(x[0]);
            end.push_back(x[1]);
        }
        sort(start.begin(), start.end());
        sort(end.begin(), end.end());
        int i =0;
        int j=0;
        int count = 0;
        int Mx=0;
        while(i<intervals.size()){
            if(start[i]<= end[j]){
                count++;
                Mx = max(Mx, count);
                i++;
            }
            else{
                count--;
                j++;
            }

        }
        return Mx;
    }
};