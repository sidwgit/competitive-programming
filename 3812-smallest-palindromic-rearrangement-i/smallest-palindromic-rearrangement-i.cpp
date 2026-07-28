class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size(); 
        int part = n / 2; 
        
        sort(s.begin(), s.begin() + part); 

        for(int i=0; i < part; ++i){
            s[n - 1 - i] = s[i]; 
        }

        return s; 

    }
};