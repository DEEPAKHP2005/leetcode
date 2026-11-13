class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0;
        int j = n-1;
        long long W = 0;
        long long MaxW = 0;
        while(i<j){
            W = min(height[i],height[j])*(j-i);
            MaxW = max(W, MaxW);
            if(height[i]<=height[j]){
            i++;
            }
            else{
                j--;
            }
        }
        return MaxW;
    }
};