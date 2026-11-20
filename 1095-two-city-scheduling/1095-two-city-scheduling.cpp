class Solution {
    static bool comp(vector<int>&a , vector<int>&b){
        return (a[0]-a[1]) < (b[0]-b[1]);
    }
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        sort(costs.begin(), costs.end(), comp);
        int n = costs.size();
        int sum = 0;
        for(int i=0;i<n;i++){
            if(i<n/2){
                sum += costs[i][0];
            }
            else{
                sum += costs[i][1];
            }
        }
        return sum;
    }
};