class Solution {
public:
    int minDeletions(string s) {
        int n = s.size();
        int arr[26] = {0};
        for(int i = 0; i < n; i++){
            arr[s[i] - 'a']++;
        }
        sort(arr, arr + 26);
        int ans = 0;
        for(int i=25;i>=0;i--){
            for(int j=i-1;j>=0;j--){
                if(arr[j]==arr[i] && arr[j]>0){
                    arr[j]--;
                    ans++;
                }
            }
        }
        return ans;
    }
};