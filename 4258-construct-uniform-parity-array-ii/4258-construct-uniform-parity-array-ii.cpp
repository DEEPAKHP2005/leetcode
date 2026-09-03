class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int minElement=*min_element(nums1.begin(),nums1.end());
        if(minElement%2==1) return true;
        for(auto x : nums1){
            if(x%2==1) return false;
        }
        return true;
    }
};