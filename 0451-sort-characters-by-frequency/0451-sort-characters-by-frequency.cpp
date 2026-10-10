class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;

        for (char x : s) {
            mp[x]++;
        }

        int n = s.size();
        vector<string> bucket(n + 1);

        for (auto x : mp) {
            bucket[x.second] += string(x.second, x.first);
        }

        string ans = "";

        for (int i = n; i >= 1; i--) {
            ans += bucket[i];
        }

        return ans;
    }
};