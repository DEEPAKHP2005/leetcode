class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        for(int i=1;i<=target[0];i++){
            ans.push_back("Push");
             if(i != target[0]){
                ans.push_back("Pop");
            }
        }
         for(int i=0;i<target.size()-1;i++){
            int a=target[i+1]-target[i];
            for(int k=1;k<a;k++){
                ans.push_back("Push");
                ans.push_back("Pop");
                
            }
            ans.push_back("Push");
         }
        return ans;
    }
};