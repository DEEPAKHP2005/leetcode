class Solution {
public:
    static bool comp(vector<int>&a, vector<int>&b){
        return a[1] > b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), comp);
        int n = boxTypes.size();
        int newTruck = truckSize;
        int ans  = 0;
        for(int i=0;i<n;i++){
            if(boxTypes[i][0] <= newTruck){
                ans += boxTypes[i][0]*boxTypes[i][1];
                newTruck -= boxTypes[i][0];
            }
            else{
                   ans+= newTruck * boxTypes[i][1];
                   break;
            }
                
            }
        return ans;
    }
};