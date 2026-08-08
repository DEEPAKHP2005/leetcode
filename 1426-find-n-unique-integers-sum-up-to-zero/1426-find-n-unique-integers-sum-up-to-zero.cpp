class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> nums;
        if(n%2!=0){
            for(int i=(-(n/2));i<=(n/2);i++){
                nums.push_back(i);
            }
        }
        else if(n%2==0){
            for(int i=(-(n/2));i<=(n/2);i++){
                nums.push_back(i);
            }
            nums.erase(nums.begin() + (n/2));
        }
        return nums;
    }
};