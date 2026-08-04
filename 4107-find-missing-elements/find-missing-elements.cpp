class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size(); 
        
        int numsMax = *max_element(nums.begin(), nums.end()); 
        int numsMin = *min_element(nums.begin(), nums.end()); 

        unordered_set<int> st(nums.begin(), nums.end());

        vector<int> ans; 

        for(int i=numsMin; i <= numsMax; i++){
            if(!st.count(i)){
                ans.push_back(i); 
            }
        }

        return ans; 

    }
};