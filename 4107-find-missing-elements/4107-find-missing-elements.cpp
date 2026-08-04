class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        map<int,int> mp;
        int minele=INT_MAX;
        int maxele=INT_MIN;
        for(auto x : nums){
            minele=min(minele,x);
            maxele=max(maxele,x);
            mp[x]++;
        }
        nums.clear();
        if(maxele==0) return nums;
        int i=minele;
        int j=maxele;
        while(i<j){
            i++;
            if (mp.count(i) == 0){
             nums.push_back(i);
            }
        }
        return nums;
    }
};