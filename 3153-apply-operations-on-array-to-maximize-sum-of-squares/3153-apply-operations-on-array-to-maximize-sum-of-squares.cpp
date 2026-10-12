class Solution {
public:
    int maxSum(vector<int>& nums, int k) {
        const int mod = 1e9 + 7;
        vector<int> bits(32, 0);

        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < 32; j++){
                if(nums[i] & (1 << j)){
                    bits[j]++;
                }
            }
        }

        long long sum = 0;
        for(int i = 0; i < k; i++){
            long long val = 0;
            for(int j = 0; j < 32; j++){
                if(bits[j] > 0){
                    val |= (1LL << j);
                    bits[j]--;
                }
            }

            sum = (sum + val * val) % mod;
        }

        return sum;
    }
};