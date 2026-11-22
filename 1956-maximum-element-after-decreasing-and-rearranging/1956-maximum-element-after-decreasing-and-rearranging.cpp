class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int num = 1;
        int n = arr.size();
        for(int i=1;i<n;i++){
            if(arr[i]>num){
                num++;
            }
        }
        return num;
    }
};