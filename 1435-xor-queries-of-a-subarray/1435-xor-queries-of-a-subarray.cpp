class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=arr.size();
        vector<int> p(n);
        p[0]=arr[0];
        for(int i=1;i<n;i++){
            p[i]=p[i-1]^arr[i];
        }
        vector<int> ans;
        for(auto &x : queries){
            int l=x[0];
            int r=x[1];
            if(l==0) ans.push_back(p[r]);
            else{
                ans.push_back(p[r]^p[l-1]);
            }
        }
        return ans;
    }
};