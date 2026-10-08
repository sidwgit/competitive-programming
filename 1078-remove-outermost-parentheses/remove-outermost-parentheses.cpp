class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0; 
        string res; 
        for(int i=0; i < s.size(); i++){
            if(s[i] == ')'){
                count--; 
            }
            if(count){
                res.push_back(s[i]); 
            }
            if(s[i] == '('){
                count++; 
            }
        }
        return res; 
    }
};