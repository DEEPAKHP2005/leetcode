class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int h=n-1;
        int l=0;
        while(h>l){
            if((numbers[h]+ numbers[l]) == target){
                return {l+1,h+1};
            }
            else if((numbers[h] + numbers[l]) > target){
                h--;
            }
            else l++;
        }
        return {-1,-1};
    }
};