class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int minele=1;
        unordered_map<int,int> mp;
        for(auto x : nums){
            if(x>0){
                minele=min(minele,x);
                mp[x];
            }
        }
        if(minele>1) return 1;
        while(mp.count(minele)){
            minele++;
        }
        return minele;
        
    }
};