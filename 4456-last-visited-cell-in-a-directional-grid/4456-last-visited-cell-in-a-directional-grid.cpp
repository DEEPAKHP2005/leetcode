class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        map<pair<int,int>, pair<int,int>>mp;
        int a = 0;
        int b = 0;
        mp[{a,b}]={a,b};
        while(true){
            int x = a;
            int y = b;
                if(grid[a][b]=='R'){
                    b++;
                    }
                else if(grid[a][b]=='L'){
                    b--;
                }
                else if(grid[a][b]=='U'){
                    a--;
                    
                }
                else if(grid[a][b]=='D'){
                    a++;
                }
                if(a < 0 || a>=n || b<0 || b >=m){
                    return {x,y};
                }
                if (mp.find({a, b}) != mp.end()) {
                    return {x, y};
                }
                mp[{a,b}]={a,b};
            }
        return {a, b};
    }
};