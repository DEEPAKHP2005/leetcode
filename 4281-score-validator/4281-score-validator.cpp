class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int n=events.size();
        int score=0;
        int counter=0;
        for(auto x : events){
            if (isdigit(x[0])) { score+= stoi(x);}
            else if(x !="W") {score++;}
            else {counter++;}
            if(counter==10) break;
            }
        return {score,counter};
    }
};