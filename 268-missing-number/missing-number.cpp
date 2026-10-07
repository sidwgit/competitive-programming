class Solution {
public:
    int missingNumber(vector<int>& nums) {
        if(nums.empty())
        return 0; 

        sort(nums.begin(), nums.end()); 
        int numsSize = nums.size(); 

        int range = nums[numsSize - 1]; 
        
        for(int i = 0; i < numsSize; i++){
            if(i != nums[i]){
                return i; 
            }
        }

        return nums[range] + 1; 

    }
};