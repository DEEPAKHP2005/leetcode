class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n=s.size();
        int l=0;
        int r=0;
        int count=0;
        int start=0;
        int end=0;
        int len=n+1;
        while(r<n){
            if(s[r]=='1') count++;
            while(count==k){
                int currLen = r - l + 1;

                if(len > currLen ||
                   (len == currLen &&
                    s.substr(l, currLen) < s.substr(start, len))) {

                    len = currLen;
                    start = l;
                }
                // if(len >= (r-l+1)){
                // len=r-l+1;
                // start=l;
                // end=r;
                if(s[l]=='1'){
                    count--;
                }
                l++;
            }
            r++;
        }
        if(len == n + 1)
            return "";

        return s.substr(start, len);
    }
};