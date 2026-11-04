class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int count = 0;
        if(capacity < plants[0]){
            return 0;
        }
        int n = plants.size();
        int newCapacity = capacity;
        for(int i=0;i<n;i++){
            if(plants[i]<= newCapacity){
                count++;
                newCapacity -= plants[i];
            }
            else {
                count += 2*i+1;
                newCapacity= capacity-plants[i];
            }
        }
        return count;
    }
};