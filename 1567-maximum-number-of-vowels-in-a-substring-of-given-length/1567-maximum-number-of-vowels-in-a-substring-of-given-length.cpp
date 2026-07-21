class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.size();
        int count=0;
        int j=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='a' || s[i]=='e' ||s[i]=='i' || s[i]=='o' ||s[i]=='u'){
                count++;
            }
            if((i-j+1)==k){
                ans = max(ans,count);
                if(s[j]=='a' || s[j]=='e' ||s[j]=='i' || s[j]=='o' ||s[j]=='u'){
                count--;
                }
                j++;

            }
        }
        return ans;
    }
};