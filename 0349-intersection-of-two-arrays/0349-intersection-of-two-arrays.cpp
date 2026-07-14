class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
      unordered_set<int> st1;
      unordered_set<int> st2;
      unordered_map<int, int> mp;
      vector<int> arr;
      for(int i=0;i<nums1.size();i++){
        st1.insert(nums1[i]);
      }
      for(int j=0;j<nums2.size();j++){
        st2.insert(nums2[j]);
      }
      for(auto x : st1){
        mp[x]++;
      }
      for(auto y : st2){
        mp[y]++;
      }
      for(auto a : mp){
         if(a.second==2){
            arr.push_back(a.first);
         }
      }
      return arr;
    }
};