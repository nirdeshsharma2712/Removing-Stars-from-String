class Solution {
public:
    string removeStars(string s) {
        string test="";
        for(int i=0;i<s.size();i++){
            test+=s[i];
            if(s[i]=='*'){
                test.pop_back();
                test.pop_back();
            }
        }
        return test;
    }
};
