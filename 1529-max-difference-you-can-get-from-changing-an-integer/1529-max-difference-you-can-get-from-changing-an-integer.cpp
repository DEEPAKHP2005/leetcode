class Solution {
public:
    int maxDiff(int num) {
        string s = to_string(num);
        int n = s.size();
        char a = '9';
        int start = n;
        string Mx = "";
        for(int i=0;i<n;i++){
            if(s[i]-'0' < 9){
                a = s[i];
                Mx += '9';
                start = i+1;
                break;
            }
            else{
                Mx += s[i];
            }
        }
        for(int i=start;i<n;i++){
            if(s[i]==a){
                Mx += '9';
            }
            else{
                Mx += s[i];
            }
        }
        string Mn = "";
        if(s[0] != '1'){
        char b = '0';
        int str = n;
        for(int i=0;i<n;i++){
            if(s[i]-'0' > 0){
                b = s[i];
                Mn += '1';
                str = i+1;
                break;
            }
            else{
                Mn += s[i];
            }
        }
        for(int i=str;i<n;i++){
            if(s[i]==b){
                Mn += '1';
            }
            else{
                Mn += s[i];
            }
        }
        }
        else{
        char b = '0';
        int str = n;
        for(int i=0;i<n;i++){
            if(s[i] != '0' && s[i] != '1'){
                b = s[i];
                Mn += '0';
                str = i+1;
                break;
            }
            else{
                Mn += s[i];
            }
        }
        for(int i=str;i<n;i++){
            if(s[i]==b){
                Mn += '0';
            }
            else{
                Mn += s[i];
            }
        }
        }
        return stoi(Mx) - stoi(Mn);
    }
};