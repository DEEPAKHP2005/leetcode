class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int n= drones.size();
        int MinInd = INT_MAX;
        int ans = INT_MAX;
        for(int i=0;i<n;i++){
            int x = drones[i][0];
            int y = drones[i][1];
            int r = drones[i][2];
            int t1 = target[0];
            int t2 = target[1];
            int z = abs(x-t1) + abs(y-t2);
            if(z <= abs(r) && z < MinInd){
                ans = i;
                MinInd = z;
            }
        }
        return (ans == INT_MAX) ? -1 : ans;;
    }
};