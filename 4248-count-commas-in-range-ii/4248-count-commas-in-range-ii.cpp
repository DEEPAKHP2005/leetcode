class Solution {
public:
    long long countCommas(long long n) {
        if(n >= 1e3 && n < 1e6){
            return n-1e3+1;
        }
        if(n >= 1e6 && n < 1e9){
            return (n-1e6+1) + (n-1e3+1);
        }
        if(n >= 1e9 && n < 1e12){
            return (n-1e9+1) + (n-1e6+1)+ (n-1e3+1);
        }
        if(n >= 1e12 && n < 1e15){
            return (n-1e12+1) + (n-1e9+1) + (n-1e6+1) + (n-1e3+1);
        }
        if(n == 1e15 ){
            return (n-1e15+1)+(n-1e12+1) + (n-1e9+1) + (n-1e6+1) + (n-1e3+1);
        }
        return 0;
    }
};