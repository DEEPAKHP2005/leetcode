class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.size();
        long long total = 0;
        long long sum = 0;
        int i =0;
        while(i<n){
            char color = colors[i];
            long long sm = 0;
            while(colors[i]==color && i<n){
                total += neededTime[i];
                sm = max((long long)neededTime[i], sm);
                i++;
            }
            sum += sm;
        }
        return total - sum;
    }
};