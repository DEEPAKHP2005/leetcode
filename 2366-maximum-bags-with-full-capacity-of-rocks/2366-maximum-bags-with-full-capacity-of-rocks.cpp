class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        vector<int> v;
        int n = capacity.size();
        for(int i=0;i<n;i++){
            int need = capacity[i] - rocks[i];
            v.push_back(need);
        }
        sort(v.begin(), v.end());
        int count = 0;
        for(int i=0;i<n;i++){
            if(additionalRocks >= v[i]){
                additionalRocks -= v[i];
                count++;
            }
            if(additionalRocks < v[i]){
                break;
            }
        }
        return count;
    }
};