class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> res;

        k = k % n;
        for(int i = 0; i < k; i++) {
            res.push_back(nums[n - k + i]);
        }

        for(int i = 0; i < n - k; i++) {
            res.push_back(nums[i]);
        }
        nums = res;
    }
};