class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> ans;
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<mat.size();i++){
            int low=0;
            int high=mat[i].size()-1;
            while(low<=high){
                int mid = (high+low)/2;
                if(mat[i][mid]==1){
                    low=mid+1;
                }
                else {
                    high=mid-1;
                }
            }
            int sldr=low;
            pq.push({sldr,i});
            if(pq.size() > k){
                pq.pop();
            }
        }
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};