class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int seq = 0;

        for (int num : st) {
            if (!st.count(num - 1)) {
                int curr = num;
                int len = 1;

                while (st.count(curr + 1)) {
                    curr++;
                    len++;
                }
                seq = max(seq, len);
            }
        }
        return seq;
    }
};