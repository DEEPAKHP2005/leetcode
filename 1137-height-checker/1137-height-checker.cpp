class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> heights1;
        for(auto x : heights){
            heights1.push_back(x);
        }
        sort(heights1.begin(),heights1.end());
        int count=0;
        for(int i=0;i<heights1.size();i++ ){
            if(heights[i]!=heights1[i]){
                count++;
            }
        }
        return count;
    }
};