class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0; 
        int finalMax = 0; 

        for(int i=0; i < nums.size(); i++){
            if(nums[i] == 1){
                max++; 

                if(finalMax < max){
                    finalMax = max; 
                }
            }
            else{
                    max = 0; 
                }
        }

        return finalMax; 
    }
};