class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false; 
        }

        sort(s.begin(), s.end()); 
        sort(t.begin(), t.end());
        
        int count = 0; 
        for(int i = 0; i < s.size(); i++){
            if(s[i] == t[i]){
                count++; 
            }
        } 
        if(count == s.size()){
            return true; 
        }

        return false; 
    }
};