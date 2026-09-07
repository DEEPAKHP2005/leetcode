class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, pair<int,int>> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]].first++;
            mp[s[i]].second=i;

        }
        for (int i = 0; i < s.size(); i++) {
        if (mp[s[i]].first == 1) {
        return i;
    }
  }
  return -1;
    }
};