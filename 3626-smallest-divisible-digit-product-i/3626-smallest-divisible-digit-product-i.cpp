class Solution {
public:
    int smallestNumber(int n, int t) {
    long long T=t;
    string s = to_string(n);
    int m=s.size();
    long long pro=1;
    for(int i=0;i<m;i++){
        pro *=(s[i]-'0');
    }
    if(pro % T==0) return n;
    else return smallestNumber(n+1,t);
    return 0;
    }
};