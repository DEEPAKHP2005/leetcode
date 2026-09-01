class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> arr;
        int sum = 0;
        for(int i=0;i<tokens.size();i++){
            if (tokens[i] != "+" && tokens[i] != "-" &&
                tokens[i] != "*" && tokens[i] != "/") {
                int x = stoi(tokens[i]);
                arr.push_back(x);
                }
            else if(tokens[i]=="+"){
                int a = arr.back() + *(arr.end()-2);
                arr.erase(arr.end()-2 , arr.end());
                arr.push_back(a);
            }
            else if(tokens[i]=="*"){
                int b = arr.back() * *(arr.end()-2);
                arr.erase(arr.end()-2 , arr.end());
                arr.push_back(b);
            }
            else if(tokens[i]=="-"){
                int c = *(arr.end()-2)-arr.back();
                arr.erase(arr.end()-2 , arr.end());
                arr.push_back(c);
            }
            else if(tokens[i]=="/"){
                int d = *(arr.end()-2) /arr.back() ;
                arr.erase(arr.end()-2 , arr.end());
                arr.push_back(d);
           }
        }
        return arr.back();
    }
};