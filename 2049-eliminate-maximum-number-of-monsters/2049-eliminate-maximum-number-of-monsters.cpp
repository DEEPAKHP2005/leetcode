class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n = dist.size();
        vector<int> arr;
        for(int i=0;i<n;i++){
             int time = ceil((double)dist[i] / speed[i]);
            arr.push_back(time);
        }
        sort(arr.begin(), arr.end());
        int count = 1;
        for(int i=1;i<n;i++){
            if(arr[i] >= i+1){
                count++;
            }
            else{
                break;
            }
        }
        return count;
    }
};