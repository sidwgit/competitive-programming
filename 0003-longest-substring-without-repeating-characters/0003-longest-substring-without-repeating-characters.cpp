class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> visited; 

        int left = 0; 
        int ans = 0; 

        for(int right = 0; right < s.size(); right++){
           while (visited.count(s[right])) {
                visited.erase(s[left]);
                left++;
            }

            visited.insert(s[right]); 
            ans = max(ans, right - left + 1);
        }
        
        return ans; 
    }
};