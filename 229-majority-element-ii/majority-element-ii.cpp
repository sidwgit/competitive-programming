class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> count;
        vector<int> res;

        for (int x : arr) {
            count[x]++;
        }
        for (auto x : count) {
            if (x.second > n / 3) {
                res.push_back(x.first);
            }
        }

        return res;
    }
};